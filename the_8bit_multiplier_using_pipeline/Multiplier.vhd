library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Multiplier is
	Generic(
		--- N is bit count.
		N: integer := 8
	);
	Port(
		--- clk is clock signal.
		clk: in STD_LOGIC;
		--- input1 and input2 are two "N bit" numbers.
		input1, input2: in STD_LOGIC_VECTOR(N - 1 downto 0);
		--- output is a "2N bit" number for result of "input1 * input2".
		output: out STD_LOGIC_VECTOR(N * 2 downto 0) := (others => '0')
	);
end Multiplier;

architecture Behavioral of Multiplier is
	--- Type for All Cins, Sins, Couts and Souts of CM_Rows and Nbit FullAdder.
	Type Row is Array (Integer range<>) of STD_LOGIC_VECTOR(N - 1 downto 0); 
	--- Multiplier Row Component that gets one bit of input1 and all input2 then gives them to C Module. 
	Component Multiplier_Row is
		Generic(
			N: integer := 8
		);
		Port(
			A: in STD_LOGIC;
			input, Cin, Sin: in STD_LOGIC_VECTOR(N - 1 downto 0);
			Cout, Sout: out STD_LOGIC_VECTOR(N - 1 downto 0)
		);
	end Component;
	--- Nbit FullAdder Component that get two Nbit numbers and output of Component is a Nbit output( input1 + input2) an one bit carry( cout ).
	Component FullAdder_Nbit is
		Generic(
			N: integer := 8
		);
		Port(
			input1, input2: in STD_LOGIC_VECTOR(N - 1 downto 0);
			cin: in STD_LOGIC;
			output: out STD_LOGIC_VECTOR(N - 1 downto 0);
			cout: out STD_LOGIC
		);
	end Component;
	--- Nbit Rigester
	Component Rigester is
		Generic(
			N: integer := 16
		);
		port(
			input: in std_logic_vector(N - 1 downto 0);
			rst, Lod: in std_logic;
			clk: in std_logic;
			output: out std_logic_vector(N - 1 downto 0)
		);
	end Component;
	--- C is "All Cins and Couts" and "S is All Sins and Souts" of CM_Rows.
	signal Cout, Sout: Row(0 to N);
	signal Cin, Sin: Row(0 to N + 1);
	--- N+1 rigester's Loads and Reset.
	signal rigLD: STD_LOGIC_VECTOR(0 to N) := (others => '0');
	signal rigRST: STD_LOGIC := '1';
	--- a signal to count clock.
	signal clkCounter: INTEGER RANGE 0 to N + 2 := 0;
begin
	--- generate N Multiplier Row component, "A" is one bit of input1, "input" is input2( Nbit number ), "Cin" is Cout of upper level,
	--- N - 1 lower bit of "Sin" is N - 1 higher bit of Sout of upper level and most significant bit of "Sin" is 0, "Sout" and "Cout"
	--- are "results of N C_Module inside Multiplier Row components" for lower level.
	--- "i" is number of each level. 
	MR_gen: for i in 0 to N - 1 Generate
		MR:  Multiplier_Row 
			generic map(
				N => N
			)
			port map(
				A => input1(i),
				input => input2,
				Cin => Cin(i),
				Sin(N - 1 downto 0) => '0' & Sin(i)(N - 1 downto 1),
				Cout => Cout(i),
				Sout => Sout(i)
			);
	end Generate;
	--- N+1 "2Nbit rigester" that their inputs are "Sout and Cout" of upper level and their outputs are "Sin and Cin" for lower level.  
	Rig_gen: for i in 0 to N Generate
		Rig:  Rigester 
			generic map(
				N => N * 2
			)
			port map(
				input(N - 1 downto 0) => Sout(i),
				input(N * 2 - 1 downto N) => Cout(i),
				rst => rigRST,
				Lod => rigLD(i),
				clk => clk,
				output(N - 1 downto 0) => Sin(i + 1),
				output(N * 2 - 1 downto N) => Cin(i + 1)
			);
	end Generate;
	--- Cin and Sin of level 0 is 0;
	Cin(0) <= (others => '0');
	Sin(0) <= (others => '0');
	--- "input1" is Cout of last level, N - 1 lower bit of "input2" is N - 1 higher bit of Sout of last level and most significant  
	--- bit of "input2" is 0, "cin" is 0, "cout" is most significant bit of "final output" and "output" is fOut for process part.
	FA: FullAdder_Nbit 
		generic map(
			N => N
		)
		port map(
			input1 => Cin(N),
			input2(N - 1 downto 0) => '0' & Sin(N)(N - 1 downto 1),
			cin => '0',
			cout => Cout(N)(0),
			output => Sout(N)
		);
	--- process part that for level 0 to 8 rigester make load pin '1' in correct time and every N+2 clock assigns result of Multiplier to output.
	process(clk)
	begin
		if rising_edge(clk)then
			if (clkCounter = 0) then
				rigRST <= '0';
				rigLD(0) <= '1';
				clkCounter <= clkCounter + 1;
			elsif	(clkCounter = N + 1) then
				rigLD(N) <= '0';
				clkCounter <= clkCounter + 1;
			elsif (clkCounter = N + 2) then
				for i in 0 to N - 1 loop
					output(i) <= Sin(i + 1)(0);
				end loop;
				output((N * 2) - 1 downto N) <= Sin(N + 1);
				clkCounter <= 0;
			else
				rigLD(clkCounter - 1) <= '0';
				rigLD(clkCounter) <= '1';
				clkCounter <= clkCounter + 1;			
			end if;
		end if;
	end process;
end Behavioral;


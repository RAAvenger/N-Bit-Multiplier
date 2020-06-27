library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity FullAdder_Nbit is
	Generic(
		N: integer := 8
	);
	Port(
		input1, input2: in STD_LOGIC_VECTOR(N - 1 downto 0);
		cin: in STD_LOGIC;
		output: out STD_LOGIC_VECTOR(N - 1 downto 0);
		cout: out STD_LOGIC
	);
end FullAdder_Nbit;

architecture Behavioral of FullAdder_Nbit is
	Component Full_Adder is
		Port(
			input1, input2, cin: in  STD_LOGIC;
			sum, cout: out  STD_LOGIC
		);
	end Component;
	signal s: STD_LOGIC_VECTOR(0 to N);
begin
	FA_gen: for i in 0 to N - 1 Generate
		FA: Full_Adder 
			PORT MAP(
				input1 => input1(i),
				input2 => input2(i),
				cin => s(i),
				sum => output(i),
				cout => s(i + 1)
			);
	end Generate;
	s(0) <= cin;
	cout <= S(N);
end Behavioral;
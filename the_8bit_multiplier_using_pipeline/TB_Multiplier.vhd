
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
Use IEEE.numeric_std.ALL;
 
ENTITY TB_Multiplier IS
END TB_Multiplier;
 
ARCHITECTURE behavior OF TB_Multiplier IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Multiplier
    PORT(
         clk : IN  std_logic;
         input1 : IN  std_logic_vector(7 downto 0);
         input2 : IN  std_logic_vector(7 downto 0);
         output : OUT  std_logic_vector(16 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal input1 : std_logic_vector(7 downto 0);
   signal input2 : std_logic_vector(7 downto 0);

 	--Outputs
   signal output : std_logic_vector(16 downto 0);

   -- Clock period definitions
   constant clk_period : time := 50 ns;
	signal a, b, c: integer := 1;

BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Multiplier PORT MAP (
          clk => clk,
          input1 => input1,
          input2 => input2,
          output => output
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;
	
	process(clk)
	begin
		if RISING_EDGE(clk) then
			if (a = 1) then
				input1 <= std_logic_vector(to_unsigned(b, 8));
				input2 <= std_logic_vector(to_unsigned(c, 8));
				a <= a + 1;
			elsif( a = 11)then
				a <= 1;
				if b >= 255 then
					b <= 1;
					c <= c + 10;
				else
					b <= b + 10;
				end if; 
				if c >= 255 then
					c <= 1;
				end if;
			else
				a <= a + 1;
			end if;
		end if;
	end process;

END;

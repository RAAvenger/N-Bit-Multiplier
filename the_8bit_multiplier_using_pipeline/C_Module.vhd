library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity C_Module is
	port(
		ModuleIn1, ModuleIn2, Sin, Cin: in STD_LOGIC;
		Sout, Cout: out STD_LOGIC
	);
end C_Module;

architecture Behavioral of C_Module is
	Component Full_Adder is
		Port(
			input1, input2, cin: in  STD_LOGIC;
			sum, cout: out  STD_LOGIC
		);
	end Component;
	signal s1: STD_LOGIC := '0';
begin
	s1 <= ModuleIn1 and ModuleIn2;
	FA: Full_Adder
		port map(
			input1 => s1,
			input2 => Sin,
			cin => Cin,
			sum => Sout,
			cout => Cout
		);
end Behavioral;


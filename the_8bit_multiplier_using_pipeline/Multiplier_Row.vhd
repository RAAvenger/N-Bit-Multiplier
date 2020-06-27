library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Multiplier_Row is
	Generic(
		N: integer := 8
	);
	Port(
		A: in STD_LOGIC;
		input, Cin, Sin: in STD_LOGIC_VECTOR(N - 1 downto 0);
		Cout, Sout: out STD_LOGIC_VECTOR(N - 1 downto 0)
	);		
end Multiplier_Row;
architecture Behavioral of Multiplier_Row is
	Component C_Module is
		port(
			ModuleIn1, ModuleIn2, Sin, Cin: in STD_LOGIC;
			Sout, Cout: out STD_LOGIC
		);
	end Component;
begin
	CM_gen: for i in 0 to N - 1 Generate
		CM: C_Module
			port map(
				ModuleIn1 => A,
				ModuleIn2 => input(i),
				Cin => Cin(i),
				Sin => sin(i),
				Cout => Cout(i),
				Sout => Sout(i)
			);
	end Generate;
end Behavioral;
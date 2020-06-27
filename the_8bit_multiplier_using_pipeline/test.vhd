library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Multiplier2 is
	port(
		A : in STD_LOGIC;
		input, Sin, Cin : in STD_LOGIC_VECTOR(7 downto 0);
		Sout, Cout : out STD_LOGIC_VECTOR(7 downto 0)
	);		
end Multiplier2;

architecture Behavioral of Multiplier2 is
	signal Creg : STD_LOGIC_VECTOR(23 downto 0) := "000000000000000000000000";
begin
	CM0:
		entity work.C_Module port map(
		ModuleIn1 => A,
		ModuleIn2 => input(0),
		Cin => Cin(0),
		Sin => sin(0),
		Cout => Cout(0),
		Sout => Sout(0)
		);
	CM1:
		entity work.C_Module port map(
		ModuleIn1 => A,
		ModuleIn2 => input(1),
		Cin => Cin(1),
		Sin => sin(1),
		Cout => Cout(1),
		Sout => Sout(1)
		);
	CM2:
		entity work.C_Module port map(
		ModuleIn1 => A,
		ModuleIn2 => input(2),
		Cin => Cin(2),
		Sin => sin(2),
		Cout => Cout(2),
		Sout => Sout(2)
		);
	CM3:
		entity work.C_Module port map(
		ModuleIn1 => A,
		ModuleIn2 => input(3),
		Cin => Cin(3),
		Sin => sin(3),
		Cout => Cout(3),
		Sout => Sout(3)
		);
	CM4:
		entity work.C_Module port map(
		ModuleIn1 => A,
		ModuleIn2 => input(4),
		Cin => Cin(4),
		Sin => sin(4),
		Cout => Cout(4),
		Sout => Sout(4)
		);
	CM5:
		entity work.C_Module port map(
		ModuleIn1 => A,
		ModuleIn2 => input(5),
		Cin => Cin(5),
		Sin => sin(5),
		Cout => Cout(5),
		Sout => Sout(5)
		);
	CM6:
		entity work.C_Module port map(
		ModuleIn1 => A,
		ModuleIn2 => input(6),
		Cin => Cin(6),
		Sin => sin(6),
		Cout => Cout(6),
		Sout => Sout(6)
		);
	CM7:
		entity work.C_Module port map(
		ModuleIn1 => A,
		ModuleIn2 => input(7),
		Cin => Cin(7),
		Sin => sin(7),
		Cout => Cout(7),
		Sout => Sout(7)
		);
end Behavioral;

			
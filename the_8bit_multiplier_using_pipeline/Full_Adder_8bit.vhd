library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Full_Adder_8bit is
	port(
		input1, input2 : in STD_LOGIC_VECTOR(7 downto 0);
		cin : in STD_LOGIC;
		output : out STD_LOGIC_VECTOR(7 downto 0);
		cout : out STD_LOGIC
	);
end Full_Adder_8bit;

architecture Behavioral of Full_Adder_8bit is
signal v1, v2, v3, v4, v5, v6, v7 : STD_LOGIC;
begin
	FA0:
		entity work.Full_Adder port map(
		input1 => input1(0),
		input2 => input2(0),
		cin => cin,
		sum => output(0),
		cout => v1
		);
	FA1:
		entity work.Full_Adder port map(
		input1 => input1(1),
		input2 => input2(1),
		cin => v1,
		sum => output(1),
		cout => v2
		);
	FA2:
		entity work.Full_Adder port map(
		input1 => input1(2),
		input2 => input2(2),
		cin => v2,
		sum => output(2),
		cout => v3
		);
	FA3:
		entity work.Full_Adder port map(
		input1 => input1(3),
		input2 => input2(3),
		cin => v3,
		sum => output(3),
		cout => v4
		);
	FA4:
		entity work.Full_Adder port map(
		input1 => input1(4),
		input2 => input2(4),
		cin => v4,
		sum => output(4),
		cout => v5
		);
	FA5:
		entity work.Full_Adder port map(
		input1 => input1(5),
		input2 => input2(5),
		cin => v5,
		sum => output(5),
		cout => v6
		);
	FA6:
		entity work.Full_Adder port map(
		input1 => input1(6),
		input2 => input2(6),
		cin => v6,
		sum => output(6),
		cout => v7
		);
	FA7:
		entity work.Full_Adder port map(
		input1 => input1(7),
		input2 => input2(7),
		cin => v7,
		sum => output(7),
		cout => cout
		);
end Behavioral;


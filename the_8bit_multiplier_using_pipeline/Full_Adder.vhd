library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Full_Adder is
	Port(
		input1, input2, cin: in  STD_LOGIC;
		sum, cout: out  STD_LOGIC
	);
end Full_Adder;

architecture Behavioral of Full_Adder is
	Component Half_Adder is
		Port(
			in1, in2: in  STD_LOGIC;
			sum, c: out  STD_LOGIC
		);
	end Component;
	--signals for sum(HA1), c(HA1) and c(HA2).
	signal s1, s2, s3: STD_LOGIC;
begin
	--half adder for in1 + in2
	HA1: Half_Adder
		port map(
			in1 => input1,
			in2 => input2,
			sum => s1,
			c => s2
		);
	--half adder for sum(HA1) + cin
	HA2: Half_Adder
		port map(
			in1 => s1,
			in2 => cin,
			sum => sum,
			c => s3
		);
	cout <= s2 or s3;
end Behavioral;


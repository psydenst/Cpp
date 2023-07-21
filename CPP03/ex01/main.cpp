// INCLUDE 42 HEADER

#include "ScavTrap.hpp"

int main()
{
	ScavTrap one("one");
	ScavTrap two("two");
	int i = 10;
	while (--i > 0)
	{
		one.attack("two");
		two.takeDamage(two.getDamage());
	}
	two.guardGate();
	one.guardGate();
}

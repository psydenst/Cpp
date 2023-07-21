#include "FlagTrap.hpp"

int main()
{
	FlagTrap one("one");
	FlagTrap two("two");

	one.attack("two");
	two.takeDamage(two.getDamage());
	int i = 10;
	while (--i > 0)
	{
		one.attack("two");
		two.takeDamage(two.getDamage());
	}
	two.highFivesGuys();
	one.highFivesGuys();
}

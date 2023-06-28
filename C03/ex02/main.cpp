#include "FlagTrap.hpp"

int main()
{
	FlagTrap one("one");
	FlagTrap two("two");

	one.attack("two");
	two.takeDamage(two.getDamage());

	two.highFivesGuys();
}

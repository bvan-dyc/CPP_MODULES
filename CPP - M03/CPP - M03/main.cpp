#include <iostream>
#include "FragTrap.h"
#include <time.h>

int main(void)
{
	std::srand(time(NULL));
	FragTrap trap("ROCKTRAP");

	trap.rangedAttack("the moon");
	trap.meleeAttack("the moon");
	trap.takeDamage(50);
	trap.takeDamage(150);
	trap.beRepaired(1000);
	trap.vaulthunter_dot_exe("the moon");
}

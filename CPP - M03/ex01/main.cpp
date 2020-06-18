#include <iostream>
#include "FragTrap.h"
#include "ScavTrap.h"
#include <time.h>

int main(void)
{
	std::srand(time(NULL));
	FragTrap fragTrap("Engel");
	ScavTrap slavTrap("Pascal");
	fragTrap.rangedAttack("the moon");
	slavTrap.rangedAttack("the sun");
	fragTrap.meleeAttack("the moon");
	slavTrap.meleeAttack("the sun");
	fragTrap.takeDamage(50);
	slavTrap.takeDamage(20);
	fragTrap.takeDamage(150);
	fragTrap.beRepaired(1000);
	slavTrap.beRepaired(15);
	fragTrap.vaulthunter_dot_exe("the moon");
	slavTrap.challengeNewcomer("Engel");
}

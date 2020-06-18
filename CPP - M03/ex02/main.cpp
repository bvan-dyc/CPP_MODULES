#include <iostream>
#include "FragTrap.h"
#include "ScavTrap.h"
#include <time.h>

int main(void)
{
	std::srand(time(NULL));
	FragTrap fragTrap("Engel");
	ScavTrap slavTrap("Pascal");
	std::cout << std::endl;
	fragTrap.rangedAttack("the moon");
	slavTrap.rangedAttack("the sun");
	fragTrap.meleeAttack("the moon");
	slavTrap.meleeAttack("the sun");
	std::cout << std::endl;
	fragTrap.takeDamage(50);
	slavTrap.takeDamage(20);
	fragTrap.takeDamage(150);
	fragTrap.beRepaired(1000);
	slavTrap.beRepaired(15);
	std::cout << std::endl;
	fragTrap.vaulthunter_dot_exe("the moon");
	slavTrap.challengeNewcomer("Engel");
	std::cout << std::endl;
}

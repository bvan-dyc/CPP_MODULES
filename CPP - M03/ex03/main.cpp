#include <iostream>
#include "FragTrap.h"
#include "NinjaTrap.h"
#include "ScavTrap.h"
#include <time.h>

int main(void)
{
	std::srand(time(NULL));
	FragTrap fragTrap("Engel");
	ScavTrap slavTrap("Pascal");
	//NinjaTrap ninjaTrap("Nietzsche");

	fragTrap.rangedAttack("the moon");
	slavTrap.rangedAttack("your lifepoints");
	//ninjaTrap.rangedAttack("america");
	std::cout << std::endl;
	fragTrap.meleeAttack("the moon");
	slavTrap.meleeAttack("your lifepoints");
	//ninjaTrap.meleeAttack("america");
	std::cout << std::endl;
	slavTrap.takeDamage(20);
	fragTrap.takeDamage(150);
	//ninjaTrap.takeDamage(90);
	std::cout << std::endl;
	fragTrap.beRepaired(1000);
	slavTrap.beRepaired(15);
	//ninjaTrap.beRepaired(25);
	std::cout << std::endl;
	fragTrap.vaulthunter_dot_exe("the moon");
	slavTrap.challengeNewcomer("Engel");
	std::cout << std::endl;
	//ninjaTrap.ninjaShoebox(fragTrap);
	//ninjaTrap.ninjaShoebox(slavTrap);
	//ninjaTrap.ninjaShoebox(ninjaTrap);
	std::cout << std::endl;
}

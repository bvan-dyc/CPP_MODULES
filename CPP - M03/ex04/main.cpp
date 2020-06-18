#include <iostream>
#include <time.h>
#include "FragTrap.h"
#include "NinjaTrap.h"
#include "ScavTrap.h"
#include "SuperTrap.h"

int main(void)
{
	std::srand(time(NULL));
	FragTrap fragTrap("Engels");
	ScavTrap slavTrap("Pascal");
	NinjaTrap ninjaTrap("Nietzsche");
	SuperTrap superTrap("Diogenes");

	fragTrap.rangedAttack("the moon");
	slavTrap.rangedAttack("your lifepoints");
	ninjaTrap.rangedAttack("america");
	std::cout << std::endl;
	fragTrap.meleeAttack("the moon");
	slavTrap.meleeAttack("your lifepoints");
	ninjaTrap.meleeAttack("america");
	std::cout << std::endl;
	slavTrap.takeDamage(20);
	fragTrap.takeDamage(150);
	std::cout << std::endl;
	fragTrap.beRepaired(1000);
	slavTrap.beRepaired(15);
	std::cout << std::endl;
	fragTrap.vaulthunter_dot_exe("the moon");
	slavTrap.challengeNewcomer("Engel");
	std::cout << std::endl;
	ninjaTrap.ninjaShoebox(fragTrap);
	ninjaTrap.ninjaShoebox(slavTrap);
	ninjaTrap.ninjaShoebox(ninjaTrap);
	std::cout << std::endl;
	superTrap.vaulthunter_dot_exe("the world");
	superTrap.ninjaShoebox(ninjaTrap);
	std::cout << std::endl;
}

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n), weapon(NULL) {
	std::cout << "HumanB " << name << " has been created" << std::endl;
}

HumanB::~HumanB(void) {
	std::cout << "HumanB " << name << " has been destroyed" << std::endl;
}

void	HumanB::attack() {
	if (!weapon)
		std::cout << name << " has no weapon yet !" << std::endl;
	else {
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	}
}

void	HumanB::setWeapon(Weapon& w) { weapon = &w; }
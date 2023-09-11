#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
	this->weapon = nullptr;
}

HumanB::~HumanB(void) {
}

void	HumanB::attack() {
	if (!this->weapon)
		std::cout << this->name << " has no weapon yet !" << std::endl;
	else {
		std::cout << this->name << " attacks with their ";
		std::cout << this->weapon->getType() << std::endl;
	}
}

void	HumanB::setWeapon(Weapon w) {
	this->weapon = &w;
}
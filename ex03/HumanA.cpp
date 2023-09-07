#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon w) {
	this->name = name;
	this->weapon = w;
}

void	HumanA::attack() {
	std::cout << this->name << " attacks with their ";
	std::cout << this->weapon.getType() << std::endl;
}
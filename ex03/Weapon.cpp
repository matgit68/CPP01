#include "Weapon.hpp"

Weapon::Weapon(void) : type("bare hands") {
	std::cout << "Weapon " << type << " has been created" << std::endl;
}

Weapon::Weapon(std::string t) : type(t) {
	std::cout << "Weapon " << type << " has been created" << std::endl;
}

Weapon::~Weapon(void) {
	std::cout << "Weapon " << type << " has been destroyed" << std::endl;
}

std::string Weapon::getType(void) const { return (type); }

void	Weapon::setType(std::string t) { type = t; }
#include "Weapon.hpp"

Weapon::Weapon(void) {
	this->type = "";
}

Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::~Weapon(void) {
}

const std::string &Weapon::getType() {
	return (this->type);
}

void	Weapon::setType(std::string type) {
	this->type = type;
}
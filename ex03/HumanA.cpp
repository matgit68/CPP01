#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon& w) : name(n), weapon(w) {
	std::cout << "HumanA " << name << " has been created with " << weapon.getType() << std::endl;
}

HumanA::~HumanA(void) {
	std::cout << "HumanA " << name << " has been destroyed" << std::endl;
}

void	HumanA::attack() {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
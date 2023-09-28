#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon w) : name(n), weapon(w){
}

HumanA::~HumanA(void) {
}

void	HumanA::attack() {
	std::cout << name << " attacks with their ";
	std::cout << weapon.getType() << std::endl;
}
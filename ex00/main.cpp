#include "Zombie.hpp"

int	main(void) {
	Zombie z1("Titi");
	Zombie *z2 = new Zombie("Tata");
	z1.announce();
	z2->announce();
	randomChump("Toto");
	delete(z2);
	return (0);
}
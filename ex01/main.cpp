#include "Zombie.hpp"
#define N 15
int	main(void) {
	Zombie z1 = Zombie("Titi");
	Zombie *h;

	h = zombieHorde(N, "Rob");
	for (int i = 0; i < N; i++)
		h[i].announce();
	z1.announce();
	delete[] h;
	return (0);
}
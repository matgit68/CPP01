#include "Zombie.hpp"
#ifndef N
# define N 5
#endif

int	main(void) {
	Zombie *h;

	if (N < 0) {
		std::cout << "Size (N) should be positive" << std::endl;
		return (1);
	}
	h = zombieHorde(N, "Rob");
	for (int i = 0; i < N; i++)
		h[i].announce();
	delete[] h;
	return (0);
}
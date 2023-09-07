#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie	*horde = new Zombie[N];
	std::string tmp;
	
	for (int i = 0; i < N; i++) {
		tmp = name;
		tmp.push_back((char) i % 10 + 48);
		horde[i].setName(tmp);
	}
	return (horde);
}
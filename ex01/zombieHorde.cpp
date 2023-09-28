#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name ) {
	Zombie	*horde = new Zombie[n];
	std::string tmp;
	
	for (int i = 0; i < n; i++) {
		tmp = name;
		tmp.push_back((char) i % 10 + 48);
		horde[i].setName(tmp);
	}
	return (horde);
}
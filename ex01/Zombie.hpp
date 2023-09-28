#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie {
private:
	std::string	name;

public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie();
	void	announce( void );
	void	setName(std::string name);
};

Zombie* zombieHorde( int n, std::string name );

#endif
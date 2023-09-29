#include "Harl.hpp"

Harl::Harl(void) {
	// std::cout << "Harl created" << std::endl;
}

Harl::~Harl(void) {
	// std::cout << "Harl destroyed" << std::endl;
}

void Harl::debug(void) {
	std::cout << "DEBUG" << std::endl;
}

void Harl::info(void) {
	std::cout << "INFO" << std::endl;
}

void Harl::warning(void) {
	std::cout << "WARNING" << std::endl;
}

void Harl::error(void) {
	std::cout << "ERROR" << std::endl;
}

void Harl::setLimit(int limit) {
	this->limit = limit;
}

void Harl::complain( std::string level ) {
	void (Harl::*fptr[4])(void) =	{&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	cmd[4] =		 	{"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (level == cmd[i])
		{
			(this->*fptr[i])();
			break ;
		}
}
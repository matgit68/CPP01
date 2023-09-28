#include <string>
#include <iostream>

int	main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Adresse de str \t\t " << &str << std::endl;
	std::cout << "Adresse stockée dans PTR " << stringPTR << std::endl;
	std::cout << "Adresse stockée dans REF " << &stringREF << std::endl << std::endl;
	std::cout << "Valeur de str \t\t" << str << std::endl;
	std::cout << "Valeur pointée par *PTR " << *stringPTR << std::endl;
	std::cout << "Valeur pointée par REF  " << stringREF << std::endl;

	return (0);
}
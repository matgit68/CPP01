#include "Harl.hpp"

int	getLimit(std::string str) {
	if (str == "DEBUG") return 0;
	if (str == "INFO") return 1;
	if (str == "WARNING") return 2;
	if (str == "ERROR") return 3;
	return (4);
}

int main(int argc, char **argv) {
	Harl	h;

	if (argc != 2) {
		std::cout << "Usage : Harl [DEBUG / INFO / WARNING / ERROR]" << std::endl;
		return 1;
	}
	switch(getLimit(argv[1])) {
		case 0:
			h.complain("DEBUG");
		case 1:
			h.complain("INFO");
		case 2:
			h.complain("WARNING");
		case 3:
			h.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}
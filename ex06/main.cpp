#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl	h;
	int		limit = 0;

	if (argc == 2)
		limit = std::stoi(argv[1]);
	if (limit < 0 || limit > 4)
		limit = 0;
	h.setLimit(limit);
	h.complain("DEBUG");
	h.complain("INFO");
	h.complain("WARNING");
	h.complain("ERROR");
	return (0);
}
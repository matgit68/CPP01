#include <string>
#include <iostream>
#include <fstream>

int replace(std::string infile, std::string s1, std::string s2) {
	int				pos;
	std::ifstream	in;
	std::ofstream	out;
	std::string		tmp, str;

	in.open(infile.c_str());
	std::cout << infile << std::endl;
	if (in.fail())
	{
		std::cout << infile << " could not be read" << std::endl;
		return (1);
	}
	infile.append(".replace");
	std::cout << infile << std::endl;
	out.open(infile.c_str());
	if (out.fail())
	{
		std::cout << infile << " could not be created" << std::endl;
		return (1);
	}
	while (!in.eof()) {
		getline(in, tmp);
		str += tmp;
		str.append("\n");
	}
	in.close();
	while ((pos = str.find(s1)))
	{
		if (pos == -1)
			break;
		str.erase(pos, s1.size());
		str.insert(pos, s2);
	}
	out << str;
	out.close();
	return (0);
}

int	main (int argc, char **argv)
{
	if (argc != 4) {
		std::cout << "Usage : replace <file> <string1> <string2>" << std::endl;
		return (1);
	}
	return (replace(argv[1], argv[2], argv[3]));
}
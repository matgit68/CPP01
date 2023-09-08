#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class Harl
{
private:
	int	limit;
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
	Harl();
	~Harl();
	void setLimit(int limit);
	void complain( std::string level );
};

#endif
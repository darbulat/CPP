//
// Created by bulat on 30.01.2022.
//

#ifndef CPP_KAREN_H
# define CPP_KAREN_H
# include <iostream>

class Karen
{
private:
	void debug();
	void info();
	void warning();
	void error();

public:
	Karen();
	~Karen();
	void complain( std::string level );
};


#endif //CPP_KAREN_H

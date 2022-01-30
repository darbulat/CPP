#ifndef CPP_REPLACE_H
# define CPP_REPLACE_H

# include <iostream>
# include <fstream>

class Replace
{
public:
	Replace();
	~Replace();
	bool replace(std::string filename, std::string s1, std::string s2);
};


#endif //CPP_REPLACE_H

#include "Replace.h"

Replace::Replace()
{
}
Replace::~Replace()
{
}

bool Replace::replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	file;
	std::ofstream	file_out;
	std::string		result;
	size_t			s1_len = s1.length();

	if (filename == "" || s1 == "" || s2 == "")
	{
		std::cerr << "Arguments can't be empty" << std::endl;
		return false;
	}
	file.open(filename.c_str());
	if (file.fail())
	{
		std::cerr << "Wrong filename" << std::endl;
		return false;
	}
	try
	{
		result.assign(std::istreambuf_iterator<char>(file),
					  std::istreambuf_iterator<char>());
	}
	catch (std::exception& ex)
	{
		std::cerr << "Can't read the file. May be it is a directory" << std::endl;
		return false;
	}
	file.close();
	for (size_t pos = 0; pos < result.length(); pos++)
	{
		if (result.compare(pos, s1_len, s1) == 0)
		{
			result.erase(pos, s1_len);
			result.insert(pos, s2);
		}
	}
	file_out.open((filename + ".replace").c_str());
	file_out << result;
	file_out.close();
	return true;
}

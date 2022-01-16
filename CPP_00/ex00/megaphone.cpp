#include <iostream>

int	main(int argc, char const *argv[])
{
	int	i;
	int	j;

	if (argc == 1)
	{
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (1);
	}
	else
	{
		i = 0;
		while (++i < argc)
		{
			j = -1;
			while (argv[i][++j])
				std::cout << (char)toupper(argv[i][j]);
		}
		std::cout << std::endl;
	}
	return (0);
}


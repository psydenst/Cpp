#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		while (argv[i])
		{
			std::cout << std::uppercase << argv[i];
			i++;
		}
		std::cout << std::endl;
    }
    return (0);
}

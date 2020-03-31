#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < ac; i++)
    {
        for (int j = 0; av[i][j]; j++)
        {
            char uppercase = av[i][j];
            if (av[i][j] >= 97 && av[i][j] <= 122)
                uppercase -= 32;
            std::cout << uppercase;
        }
    }
    std::cout << std::endl;
    return (0);
}

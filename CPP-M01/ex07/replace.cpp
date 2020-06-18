#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    if (ac > 3)
    {
        std::string filename = av[1];
        std::ifstream inFile(filename);
        std::ofstream outFile(filename + "./replace");
        std::string s1 = av[2];
        std::string s2 = av[3];

        if (!inFile.fail() && !outFile.fail())
        {
            std::string buffer;
            size_t s1Len = s1.length();
            while ((std::getline(inFile, buffer)));
            {
                size_t s1pos = buffer.find(s1);
                while (s1pos != std::string::npos)
                {
                    buffer.replace(s1pos, s1Len, s2);
                }
                outFile << buffer << std::endl;
            }
            inFile.close();
            outFile.close();
        }
    }
    else {
        std::cout << "USAGE: ./replace file <string1> <string2>" << std::endl;
    }
    return (0);
}


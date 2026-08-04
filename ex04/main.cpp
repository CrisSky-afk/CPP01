#include <fstream>
#include <iostream>
#include <string>
#include <iterator>

int main (int ac, char *av[])
{
    if (ac != 4)
    {
        std::cerr << "Invalid number of arguments! Try again." << std::endl;
        return 1;
    }

    std::string fileName = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    std::ifstream input(fileName.c_str());
    if (!input.is_open())
    {
        std::cerr << "Error in input file" << std::endl;
        return 1;
    }
    std::string content((std::istreambuf_iterator<char>(input)),
        std::istreambuf_iterator<char>());

    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = content.find(s1, pos)) != std::string::npos)
    {
        result += content.substr(pos, (found - pos));
        result += s2;
        pos = found + s1.length();
    }
    result += content.substr(pos);

    std::string newFile = fileName + ".replace";
    std::ofstream output(newFile.c_str());
    if (!output.is_open())
    {
        std::cerr << "Error in output file" << std::endl;
        return 1;
    }
    output << result;
    return 0;
}
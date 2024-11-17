#include <string>
#include <iostream>
#include <fstream>


int main(int argc, char** argv)
{
    if (argc != 4)
        return std::cerr << "Error: Number of argument !" << std::endl, 1;
    for (int i = 1; i < 4; ++i)
    {
        if (argv[i][0] == '\0')
            return std::cerr << "Error: Null argument !" << std::endl, 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream infile(argv[1]);
    if (!infile.is_open())
        return std::cerr << "Error: Cannot open file !" << std::endl, 1;

    std::string infile_2_name = filename + ".replace";
    std::ofstream infile_2(infile_2_name.c_str());
    if (!infile_2)
        return std::cerr << "Eroor: Creat new file impossible", 1;
    
    
    std::string line, copie;
    size_t first, pos;
    while(std::getline(infile, line))
    {
        pos = 0;
        while ( (first = line.find(s1, pos)) != std::string::npos)
        {
            copie += line.substr(pos, first - pos) + s2;
            pos = first+ s1.length();
        }
        copie += line.substr(pos);
        infile_2 << copie << std::endl;
    }


}
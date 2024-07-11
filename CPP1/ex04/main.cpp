#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>

void    customReplace(std::string &src, const std::string s1, const std::string s2)
{
    size_t  pos = 0;

    while ((pos = src.find(s1, pos)) != std::string::npos) 
    {
        src.erase(pos, s1.length());
        src.insert(pos, s2);
        pos += s2.length();
    }}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "ERROR : 3 parameters needed" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3]; 
    std::ifstream inputFile(argv[1]);
    char    *replace = strcat(argv[1], ".replace");

    if(!inputFile)
    {
        std::cerr << "ERROR : " << filename << " can't be opened" << std::endl;
        return 1;
    }
    std::string content((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());
    inputFile.close();
    customReplace(content, s1, s2);
    std::ofstream outputFile(replace);
    if(!outputFile)
    {
        std::cerr << "ERROR : " << argv[1] << ".modified" << " can't be modified" << std::endl;
        return 1;
    }
    outputFile << content;
    outputFile.close();
    return 0;
}

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "String variable adress " << &str << std::endl;
    std::cout << "stringPTR variable adress " << stringPTR << std::endl;
    std::cout << "stringREF variable adress " << &stringREF << std::endl;

    std::cout << "String value " << str << std::endl;
    std::cout << "stringPTR value " << *stringPTR << std::endl;
    std::cout << "stringREF value " << stringREF << std::endl;

    return 0;
}

#include <iostream>
int  main(void)
{
    std::string initialized = "HI THIS IS BRAIN";
    std::string *stringPTR = &initialized;
    std::string &stringREF = initialized;

    std::cout << "initialized Mem Address : " << &initialized << std::endl;
    std::cout << "stringPTR   Mem Address : " << stringPTR << std::endl;
    std::cout << "stringREF   Mem Address : " << &stringREF << std::endl;
    std::cout << "......................................." << std::endl;
    std::cout << "initialized Value : " << initialized << std::endl;
    std::cout << "stringPTR   Value : " << *stringPTR << std::endl;
    std::cout << "stringREF   Value : " <<  stringREF << std::endl;


}
#include <iostream>
#include "version.hxx"

int main(int, char**){
    std::cout <<"Hello World"<< std::endl;
    std::cout <<"Version  = "<< helloword::getVersion() << std::endl;
    return std::cout.good() ? 0 : 1;
}
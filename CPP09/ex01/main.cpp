#include "RPN.hpp"

int main(int argc, char **argv)
{
    RPN rpn;
    if (argc != 2)
    {
        std::cerr << "Invalid args" << std::endl;
        return -1;
    }
    std::string str = argv[1];
    rpn.setCalculus(str);
   // std::cout << rpn.getResult() << std::endl;
}

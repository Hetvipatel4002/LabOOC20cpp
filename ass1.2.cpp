#include <iostream>
namespace hetvi
{

    int mul()
    {
        int a, b;
        std::cout<<"enter two values="<<std::endl;
        std::cin>>a>>b;
        std::cout<<"multiplication="<<a*b<<std::endl;
        return a*b;
    }
    int div()
    {
        int a,b;
        std::cout<<"enter two values="<<std::endl;
        std::cin>>a>>b;
        std:: cout<<"division="<<a/b<<std::endl; 
        return a/b;
    }

}
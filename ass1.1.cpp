#include <iostream>
namespace hetvi
{
    
    int add()
    {
        int a,b;
        std::cout<<"enter two values="<<std::endl;
        std::cin>>a>>b;
        std::cout<<"addition="<<a+b<<std::endl;
        return a + b;
     }
     
    int sub()
    {
        int a,b;
        std::cout<<"enter two values="<<std::endl;
        std::cin>>a>>b;
        std::cout<<"subtraction="<<a-b<<std::endl;
        return a - b;
    }
}
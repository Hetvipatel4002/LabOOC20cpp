#include <iostream>
namespace hetvi
{
    int add();
    int sub();
    int mul();
    int div();
}

 int main()
 {
    int ch;
    std::cout<<"1.Addition"<<std::endl;
    std::cout<<"2.Subtraction"<<std::endl;
    std::cout<<"3.Multiplication"<<std::endl;
    std::cout<<"4.Division"<<std::endl;
    std::cout<<"Enter your choice:"<<std::endl;
    std::cin>>ch;
    switch (ch)
    {
        case 1:
            hetvi::add();
            break;
        case 2:
            hetvi::sub();
            break;
        case 3:
            hetvi::mul();
            break;
        case 4:
            hetvi::div();    
            break;
        case 5:
            std::cout<<"exit"<<std::endl;
            break;    
         default:
            std::cout <<"Invalid choice.."<<std::endl;
                         
    }
    return 0;
 }



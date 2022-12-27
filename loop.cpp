#include "Day.hh"

bool loop_fun()
{
    int number;
    
    do{
        std::cout<<"Enter Number"<<std::endl;
        std::cin>>number;
        std::cout<<number<<std::endl;
    }while(number>0);
    
    return 0;

}
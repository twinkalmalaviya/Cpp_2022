#include "Day.hh"

bool EvenOdd()
{
    unsigned int number;
    std::cout<<"Enter Number "<<std::endl;
    std::cin>>number;

    if(number%2)
    {
        std::cout<<"Odd Number" <<std::endl;

    }
    else{
        std::cout<<"Even Number"<<std::endl;
    }
    return 0;
}
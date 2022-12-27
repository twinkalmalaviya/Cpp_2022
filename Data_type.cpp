#include "Day.hh"

bool data_type()
{
    int a; // declaration
    a=12; //initiallisation
    
    /*type modifiers*/
    short int si;
    long int li;
    std::cout<<"Data_type"<<std::endl;
    std::cout<<"size of short int "<<sizeof(si)<<std::endl;
    std::cout<<"size of long int "<<sizeof(li)<<std::endl;
    std::cout<<"size of int "<<sizeof(a)<<std::endl;

    float b;
    std::cout<<"size of float "<<sizeof(b)<<std::endl;

    char c;
    std::cout<<"size of char "<<sizeof(c)<<std::endl;

    bool d;
    std::cout<<"size of bool "<<sizeof(d)<<std::endl;

    return 0;
}
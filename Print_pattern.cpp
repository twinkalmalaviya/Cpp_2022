#include "Day.hh"

bool print_pattern()
{
    unsigned int row=0, column=0;
    unsigned short int no=0;
    std::cout<<"Enter pattern No 1 to 5"<<std::endl;
    std::cin>>no;

    switch(no)
    {
        case 1 :
            std::cout<<"Enter row & column"<<std::endl;
            std::cin>>row>>column;
            for(int i=1; i<=row;i++)
            {
                for(int j=1; j<=column;j++)
                {
                    std::cout<<"* ";
                }
                std::cout<<std::endl;
            }
            break;

        case 2:
            std::cout<<"Enter row & column"<<std::endl;
            std::cin>>row>>column;
            for(int i=1; i<=row;i++)
            {
                for(int j=1; j<=column;j++)
                {
                    if(i==1||i==row||j==1||j==column)
                        std::cout<<"* ";
                    else
                        std::cout<<"  ";
                }
                std::cout<<std::endl;
            }
            break;

        case 3:
            std::cout<<"Enter row "<<std::endl;
            std::cin>>row;
            for(int i=1;i<=row;i++)
            {
                for(int j=1;j<=i;j++)
                {
                    std::cout<<"* ";
                }
                std::cout<<std::endl;
            }
            break;
        case 4:
            std::cout<<"Enter row"<<std::endl;
            std::cin>>row;
            for(int i=row;i>=1;i--)
            {
                for(int j=1;j<=i;j++)
                {
                    std::cout<<"* ";
                }
                std::cout<<std::endl;
            }
            break;
        case 5:
            std::cout<<"Enter row"<<std::endl;
            std::cin>>row;
            for(int i=1;i<=row;i++)
            {
                for(int j=row;j>=1;j--)
                {
                    if(j>i)
                    std::cout<<"  ";
                    else
                    std::cout<<"* ";
                }
                std::cout<<std::endl;
            }
        default:
            std::cout<<"Invalid pattern no"<<std::endl;
    }


    return 0;
}
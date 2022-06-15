#include <iostream>

int main()
{
    const char *ptr = "Hello";
    std::cout<<"Value of ptr "<<ptr<<std::endl;

    std::string n;    
   
    while(*ptr!='\0')
    {
        
        n=*ptr++ + n;
        //std::cout<<*ptr<<std::endl;
    }
   
   std::cout<<n<<std::endl;



    return 0;
}
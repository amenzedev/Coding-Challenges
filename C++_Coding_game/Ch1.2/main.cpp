#include <iostream>

using namespace std;

int get_length(char * str)
{
    int counter = 0;
    char* temp = str;
    while(*temp)
    {
        counter++;
        *temp++;
    }
    return counter;

}
//my solution 
void my_reverse(char* str)
{
    int counter = get_length(str);
    char* answer;
    char* temp = answer;
    for(int i=counter-1;i>=0;i--)
    {
        *answer = str[i];
        *answer++;        
    }

    str = temp;
    cout<<"inside function "<<str<<endl;
}

//book solution

void reverse(char* str)
{
    char* end = str;
    char tmp;
    if(str)
    {
        while(*end)
            end++;
        
        while(str < end)
        {
            tmp = *str;
            *str++ = *end;
            *end-- = tmp;
        }
    }
}

int main()
{
    char* name ="hello";
    cout<<"my solution ... "<<endl;
    cout<<name<<endl;
    my_reverse(&*name);
    cout<<name<<endl;

    name ="hello";
    cout<<endl<<endl;
    cout<<"book solution ... "<<endl;
    cout<<name<<endl;
    reverse(name);
    cout<<name<<endl;

    return 0;
}
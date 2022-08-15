#include <iostream>
using namespace std;

int main()
{
    string text = "TACOCAT";
    bool palindrome = true;
    
    for(int i=0;i<(text.length()-1)/2;i++)
    {
        if(text[i]!= text[(text.length()-1)-i])
        {
            palindrome = false;
            break;
        }
    }
    if(palindrome)
        cout<<"this string is a palindrome"<<endl;
    else cout<<"this string is not a palildrome"<<endl;
}
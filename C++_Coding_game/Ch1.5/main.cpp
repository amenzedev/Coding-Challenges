#include <iostream>

using namespace std;
string my_compress(string str)
{
    string compressed = "";
    char current_char;
    int counter = 1;
    if(str[0]) current_char =str[0];
    for(int i=0;i<str.length();i++)
    {
        if(i==str.length()-1)
            compressed+= current_char+to_string(counter);
        else{
            if(str[i]==current_char)
                counter++;
            else{
                compressed+= current_char+to_string(counter);                
                current_char = str[i];
                counter = 1;
            }
            
        }
       
    }
    if(str.length() <= compressed.length()) return str;

    return compressed;
}
int main()
{
    string original = "aabcccccaaa";
    string compressed = my_compress(original);
    cout<<compressed<<endl;

    original = "abca";
    compressed = my_compress(original);
    cout<<compressed<<endl;

    return 0;

}
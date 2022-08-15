//confirm if the characters are only ascii characters
#include <iostream>
#include <string>

using namespace std;

bool isUniqueChars2(string str)
{
    if(str.length() > 256)
        return false;

    bool char_set[256];
    
    for(int i=0;i<str.length();i++)
    {
        int val = static_cast<int>(str[i]);
        if(char_set[val])
            return false;
        char_set[val] = true;
    }

    return true;
}


int main()
{
    string test1 = "abcd";
    cout<<isUniqueChars2(test1)<<endl;

    string test2 = "abb";
    cout<<isUniqueChars2(test2)<<endl;

    return 0;
}
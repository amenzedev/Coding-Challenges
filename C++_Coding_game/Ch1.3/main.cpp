#include <iostream>
#include <unordered_map>

using namespace std;

bool my_check_permutation(string str1,string str2)
{
    if(str1.length() != str2.length())
        return false;

    unordered_map<char,int> table;
    for(int i=0;i<str1.length();i++)
    {
        table[str1[i]]+=1;
    }

    for(int i=0;i<str2.length();i++)
    {
        table[str2[i]]--;
        if(table[str2[i]]<0)
        {
            return false;
        }
        
    }
    return true;
}

bool book_check_permutation(string str1,string str2)
{
    if(str1.length() != str2.length())
        return false;
    int table[256];
    for(char c: str1)
    {
        table[c]++;
    }

    for(int i=0;i<str2.length();i++)
    {
        table[str2[i]]--;
        if(table[str2[i]]<0)
        {
            return false;
        }
        
    }
    return true;
}

int main()
{
    string str1= "abc";
    string str2 = "cba";
    string str3 = "b";
    cout<<my_check_permutation(str1,str2)<<endl;
    cout<<my_check_permutation(str1,str3)<<endl;

    cout<<endl<<endl;
    cout<<book_check_permutation(str1,str2)<<endl;
    cout<<book_check_permutation(str1,str3)<<endl;

    


    return 0;


}
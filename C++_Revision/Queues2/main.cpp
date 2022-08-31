#include <iostream>
#include <queue>

using namespace std;

int main()
{
    string toConvert = "this is the string to convert";
    queue <char> converted;

    for(int i=0;i<toConvert.length();i++)
    {
        converted.push(toupper(toConvert[i]));

    }

    for(int i=0;i<toConvert.length();i++)
    {
        cout << converted.front();
        converted.pop();
    }

    return 0;
}
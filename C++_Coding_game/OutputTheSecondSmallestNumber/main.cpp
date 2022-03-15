#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    int min;
    int max=2147483647;
    int answer;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num; cin.ignore();
        if(i==0)min=num;
        else if(num>min && num<max)
        max=num;
        else if(min>num)min=num;
        if(num>=min && num<=max)
        answer =num;
        

    }
    cout<<answer;
}
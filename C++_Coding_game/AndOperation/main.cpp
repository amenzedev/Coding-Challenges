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
    string n_1;
    getline(cin, n_1);
    string n_2;
    getline(cin, n_2);

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
   //cout << n_1[0];
    if(size(n_1) == size(n_2))
    {
        for(size_t i=0;i<size(n_1);i++)
        {
            if(n_1[i]=='1' && n_2[i]=='1')
            cout << '1';
            else cout <<'0';
        }
    }
    
}
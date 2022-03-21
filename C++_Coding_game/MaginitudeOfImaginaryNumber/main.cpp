#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string z;
    getline(cin, z);

    //Sample input 1+1i 123.54+234.2234i

    cout<<std::fixed << std::setprecision(1)<<endl;
    int plus = 0;
    int im = 0;
    for (int i=0;i<sizeof(z);i++)
    {
        if(z[i] == '+' or z[i] == '-')
            plus = i;
        else if(z[i]=='i')
        {
            im = i;
            break;
        }
            

    }

    double real = std::stod(z.substr(0,plus));
    double imag = std::stod(z.substr(plus+1,im));
    //double mag = pow(imag,2)+pow(real,2);
    double mag = pow(real,2) + pow(imag,2);




    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << real<<" "<<imag<<" "<<mag<< endl;
}
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
    string drink;
    cin >> drink; cin.ignore();
    int straw;
    cin >> straw; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    if(straw)std::cout<<"____|____";
    else cout << "_________";
    std::cout<< std::endl<<"\\       /";
    std::cout<< std::endl<<" \\  "+drink+"  /";
    std::cout<<std::endl<<"  \\___/";

    //cout << "cup" << endl;
}
#include <iostream>

int insertNinMfromItoJ(int n, int m, int i , int j)
{
    int right = (1 << i) - 1;
    int allones = ~0;
    int left = (allones << (j+1));
    //std::cout << left << " "<< right<< std::endl;

    int mask = left | right;
    int n_cleared = n & mask;
    m = m << i;
    //std::cout<<m << " "<<n_cleared << std::endl;
    return n | m;

}

int main()
{
    std::cout << insertNinMfromItoJ(5,3,1,2)<<std::endl; //outputs 7
    return 0;
}
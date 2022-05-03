#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <math.h>
class Solution {
public:
    bool isPalindrome(long x) {
        if(x<0)
            return false;
        else{
            std::string a = std::to_string(x);
            long temp = x;
            long second=0;
            for(int i=0;i<a.length();i++)
            {
             second += static_cast<long> (temp%10 * std::pow(10,a.length()-1-i));
             temp = temp/10;
            }
            second += temp %10;
            if(second == x)
                return true;
        }
        return false;
    }
};

int main()
{
    int x= 121;
    Solution a;
    std::cout<< a.isPalindrome(x)<<std::endl;
    x = -121;
    std::cout<< a.isPalindrome(x)<<std::endl;
    return 0;
}
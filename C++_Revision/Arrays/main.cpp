#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int arr[] = {2,3,6,8};
    int sum = 5;
    int arrSize=(sizeof(arr)/sizeof(arr[0]));
    int index = 0;
    int num1 = arr[index];
    while(index <=arrSize && num1 < sum)
    {
        int i = index + 1;
        while(i < arrSize && arr[i] <= sum-i)
        {
            if(num1 + arr[i] == sum)
            {
                cout << num1 << " "<<arr[i]<<endl;
                i = arrSize;
            }
            else i++;
        }
        index++;
        num1 = arr[index];
    }

    return 0;

}
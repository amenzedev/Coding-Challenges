#include <iostream>
#include <iomanip>
#include <vector>
#include <math.h>
using namespace std;

int kConcatenationMaxSum(vector<int>& arr, int k) 
{
        
        bool positive = false, negative = false;
        int array_size = arr.size();
        
        long long sum = 0;
        if(array_size==0) return sum;
        long long array_sum =0;
       
        if(k==1)
        {
            for(int j=0;j<array_size;j++)
            {
                
                if(arr[j]>=0)positive= true;
                else negative = true;
                
            }
            if(positive && negative)
            {
                int max = 0;
                for(int i=0;i<arr.size();i++)
                {
                    if(arr[i]<0)
                    {
                        sum =0;
                        continue;
                    }
                    sum +=arr[i];
                    if(sum > max)max =sum;
                }
                sum = max;
            return sum%(static_cast<int>(pow(10,9)+7));
            }
            
            
        }
         for(int i:arr)
            array_sum += i;
        
        for(int i=1;i<3 && i< k;i++)
        {
            for(int j=0;j<array_size;j++)
            {
                
                arr.insert(arr.end(), arr[j]);
                //arr[j+i*array_size]=arr[j];
                if(arr[j]>=0)positive= true;
                else negative = true;
                
            }
            if(negative && !positive)
                return 0;
            
            
        }
        if(positive && negative)
            {
                long long max =0;
                for(int i=0;i<array_size*2;i++)
                {
                    max+=arr[i];
                    if(max < 0) max = 0;
                    else if(max > sum) sum = max;
                    
                }
                if(k==2)                                  
                return sum%(static_cast<int>(pow(10,9)+7));
                else {
                    if(array_sum > 0)
                        sum = sum+(k-2)*array_sum;                    
                    return sum%(static_cast<int>(pow(10,9)+7));
                }
                
            }
        else if(negative)
                return 0;
        
        else if(positive)
        {
                sum = array_sum * k;
            return sum%(static_cast<int>(pow(10,9)+7));
        }
        
        
        return sum%(static_cast<int>(pow(10,9)+7));
        
}



int main()
{
        int  numbers[]={-5,4,-4,-3,5,-3};
        vector<int> arr;
        for (int i=0;i<6;i++)
                arr.insert(arr.end(),numbers[i]);
        int k=3;
        cout<<kConcatenationMaxSum(arr, k)<<endl; //outputs 5
        return 0;
}
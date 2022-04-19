#include <algorithm>
#include <vector>
#include <iostream>
#include <iomanip>
#include <iterator>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int s_index =-1;
        int e_index = -1;
        for (int i=0; i < std::size(nums);i++)
        {
            if((std::count(nums.begin(),nums.end(),target-nums.at(i))==1 && nums.at(i)!=target-nums.at(i))||(std::count(nums.begin(),nums.end(),target-nums.at(i))==2))
            {
                s_index = i;
                auto it = find(nums.begin()+1+i, nums.end(), target-nums.at(i));
                e_index = it-nums.begin();
                break;
            }
                
                
        }
        std::vector<int> myvector;
        if(s_index!=-1)
        {
            
            myvector.push_back(s_index);
            myvector.push_back(e_index);
            
        }
        return myvector;
    }
};

int main()
{   
    std::vector <int>  nums={2,7,11,15};
    int target = 9;
    Solution soln;
    std::vector<int> answer = soln.twoSum(nums,target);

    for(int i: answer)
     std::cout << i << std::endl;
    return 0;
}
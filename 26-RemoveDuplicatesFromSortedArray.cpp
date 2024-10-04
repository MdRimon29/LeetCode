#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int left=1,right =1;
        
        for(right; right<nums.size(); right++)
        {
            if(nums[right]!= nums[right-1])
            {
                nums[left]=nums[right];
                left+=1;
            }
        }
        return left;
    }
};
int main()
{
    vector<int>nums={0,0,1,1,1,2,2,3,3,4};

    int result = (new Solution())->removeDuplicates(nums);

    cout << result << endl; 

    for (int i = 0; i < result; i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}
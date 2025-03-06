#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int len=nums.size();
        int left=0,right=len-1;

        while(left<right)
        {
            int add=nums[left]+nums[right];
            if(add<target)
            {
                left++;
            }
            else if(add>target)
            {
                right--;
            }
            else
            {
                return {left,right};
            }
        }
        return {};
    }
};

int main()
{
    vector<int>nums={2,7,11,15};
    int target=9;

    vector<int>result=Solution().twoSum(nums,target);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1,ans=nums.size();

        while(low<=high)
        {
            int mid=low+(high-low)/2;

            if(nums[mid]>=target)
            {
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return ans;
    }
};

int main()
{
    vector<int>nums={1,3,5,6};
    int target=2;

    int result=Solution().searchInsert(nums,target);

    cout<<result<<endl;

    return 0;
}
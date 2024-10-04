#include<bits/stdc++.h>
using namespace std;

class Solution {
    int first_position(vector<int>& nums, int target)
    {
        int len=nums.size();
        int left=0,right=len-1,first_pos=len;
        
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]>=target)
            {
                first_pos=mid;
                right=right-1;
            }
            else
            {
                left=mid+1;
            }
        }
        return first_pos;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=first_position(nums,target);
        int last=first_position(nums,target+1)-1;
        if(first<=last)
        {
            return {first,last};
        }
        return {-1,-1};
    }
};

int main()
{
    vector<int>nums={5,7,7,8,8,10};
    int target=8;

    vector<int>result=Solution().searchRange(nums,target);

    cout<<'['<<result[0]<<','<<result[1]<<']'<<endl;

    return 0;
}
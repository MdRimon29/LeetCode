#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1,mid;

        if(nums[right]<target)
        {
            return right+1;
        }

        while(left<=right)
        {
            mid=left+(right-left)/2;

            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid] <target)
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }    
        }
        return left;
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
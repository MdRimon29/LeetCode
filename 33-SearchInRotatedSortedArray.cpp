#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,n=nums.size(),right=n-1,ans=-1;
        int first=nums[0];
        
        while(left<=right)
        {
            int mid=left+(right-left)/2;

            if(nums[mid]==target)
            {
                return mid;
            }
            if (nums[left]<=nums[mid])
            {
                if(target>nums[mid] || target<nums[left])
                {
                    left=mid+1;
                }
                else
                {
                    right=mid-1;
                }
            }
            else
            {
                if(target<nums[mid] || target>nums[right])
                {
                    right=mid-1;
                }
                else
                {
                    left=mid+1;
                }
            }
        }
        return ans;
        
    }
};


int main()
{
    vector<int>nums={4,5,6,7,0,1,2};
    int target=2;

    int result=Solution().search(nums,target);

    cout<<result<<endl;

    return 0;
}
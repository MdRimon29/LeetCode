#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;

            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }

//recursive one
public:
    int binarySearch(vector<int>&nums,int low,int high,int target)
    {
        if(low>high) return -1;
        int mid=(low+high)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(nums[mid]<target) 
        {
            return binarySearch(nums,mid+1,high,target);
        }
        else{
            return binarySearch(nums,low,mid-1,target);
        }
    }
    int searchRecursion(vector<int>&nums,int target)
    {
        return binarySearch(nums,0,nums.size()-1,target);
    }    
};


int main()
{
    vector<int>nums={-1,0,3,5,9,12};
    int target = 3;

    int result=Solution().searchRecursion(nums,target);

    cout<<result<<endl;
    return 0;
}
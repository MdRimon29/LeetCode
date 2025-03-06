#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for(int i=0; i<nums.size(); i++)
        {
            int a=nums[i];
            int rem=target-a;
            if(mpp.find(rem)!=mpp.end())
            {
                return {mpp[rem],i};
            }
            mpp[nums[i]]=i;
        }
        return {-1,-1};
    }
};

int main()
{
    vector<int>nums={2,7,11,15};
    int target=9;

    Solution object;
    vector<int>result=object.twoSum(nums,target);

    for(auto it:result){
        cout<<it<<" ";
    }

    return 0;
}
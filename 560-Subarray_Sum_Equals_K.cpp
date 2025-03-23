#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        mpp[0]=1;

        int preSum=0,count=0;

        for(int i=0; i<nums.size(); i++)
        {
            preSum += nums[i];
            int sub=preSum-k;
            count += mpp[sub];
            mpp[preSum]+=1;
        }

        return count;
    }
};

int main()
{
    vector<int>vec={1,2,3};
    int k=3;

    int result=Solution().subarraySum(vec,k);

    cout<<"Result is : "<<result<<endl;

    return 0;
}
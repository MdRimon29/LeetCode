#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maximum=0;
        int count=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==1)
            {
                count++;
                maximum=max(maximum,count);
            }
            else{
                count=0;
            }
        }
        return maximum;
    }
};

int main()
{
    vector<int>nums={1,1,0,1,1,1};

    Solution object;
    int result=object.findMaxConsecutiveOnes(nums);

    cout<<result<<endl;
}
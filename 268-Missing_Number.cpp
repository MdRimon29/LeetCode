#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int missingNumber(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0; i<nums.size(); i++)
        {
            count +=nums[i];
        }

        int actualSum=(n*(n+1))/2;
        
        return (actualSum-count);
    }
};

int main()
{
    vector<int>nums={3,0,1};

    Solution object;
    int result=object.missingNumber(nums);

    cout<<"Missing number is: "<<result<<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // brute force
    // vector<int> getConcatenation(vector<int>& nums) {
    //     int n=nums.size();
    //     vector<int>ans;

    //     for(int i=0; i<2*n; i++)
    //     {
    //         ans.push_back(nums[i%n]);
    //     }

    //     return ans;
    // }

    //simple stl solution will be
    // vector<int> getConcatenation(vector<int>& nums) {
    //     int n=nums.size();
    //     vector<int>ans(nums); //copy the nums 

    //     ans.insert(ans.end(),nums.begin(),nums.end()); //append it to itself

    //     return ans;
    // }

    //optimal way
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans((n*2),INT_MIN);

        for(int i=0; i<n; i++)
        {
            ans[i]=ans[i+n]=nums[i];
        }

        return ans;
    }
};

int main()
{
    vector<int >vec={1,2,1};
    vector<int>result=Solution().getConcatenation(vec);

    for(auto it:result)
    {
        cout<<it<<" ";
    }

    return 0;
}
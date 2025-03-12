#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int even=0,odd=1;
        vector<int>vec(nums.size());

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]%2==0)
            {
                vec[even]=nums[i];
                even +=2;
            }
            else
            {
                vec[odd]=nums[i];
                odd +=2;
            }
        }

        return vec;
    }
};

int main()
{
    vector<int>vec={4,2,5,7};

    vector<int>result=Solution().sortArrayByParityII(vec);

    for(auto it: result)
    {
        cout<<it<<" ";
    }
}
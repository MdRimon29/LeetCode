#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0,neg=1;
        vector<int>vec(nums.size());
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>=0)
            {
                vec[pos]=nums[i];
                pos +=2;
            }
            else
            {
                vec[neg]=nums[i];
                neg +=2;
            }
        }

        return vec;
    }
};

int main()
{
    vector<int>vec={3,1,-2,-5,2,-4};

    vector<int>result=Solution().rearrangeArray(vec);

    for(auto it: result){
        cout<<it<<" ";
    }
}
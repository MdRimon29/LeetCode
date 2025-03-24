#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0,count2=0,el1=0,el2=0;
        int n=nums.size();
        vector<int>res;

        for(int i=0; i<nums.size(); i++)
        {
            if(count1==0 && el2!=nums[i])
            {
                count1++;
                el1=nums[i];
            }
            else if(count2==0 && el1!=nums[i])
            {
                count2++;
                el2=nums[i];
            }
            else if(el1==nums[i])
            {
                count1++;
            }
            else if(el2==nums[i])
            {
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1=0,count2=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==el1) count1++;
            if(nums[i]==el2) count2++;
        }

        if(count1>n/3) res.push_back(el1);
        if(count2>n/3) res.push_back(el2);

        sort(res.begin(),res.end());

        return res;
    }
};

int main()
{
    vector<int>vec={1,1,1,1,3,2,2,2};

    vector<int> result=Solution().majorityElement(vec);

    for(auto it:result)
    {
        cout<<it<<" ";
    }

    return 0;
}
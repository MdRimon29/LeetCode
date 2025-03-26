#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>vec;
        int n=nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0; i<n; i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;

            while (j<k)
            {
                long long sum=nums[i];
                sum += nums[j];
                sum += nums[k];

                if(sum<0)
                {
                    j++;
                }
                else if(sum>0)
                {
                    k--;
                }
                else
                {
                    vector<int>vec2={nums[i],nums[j],nums[k]};
                    vec.push_back(vec2);
                    j++;
                    k--;

                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;
                }
            }
        }
        return vec;
    }
};

int main()
{
    vector<int>vec={-1,0,1,2,-1,-4};

    vector<vector<int>> result=Solution().threeSum(vec);

    for(int i=0; i<result.size(); i++)
    {
        for(int j=0; j<result[i].size(); j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
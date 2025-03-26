#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums,int target) {
        vector<vector<int>>vec;
        int n=nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0; i<n; i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1; j<n; j++)
            {
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int k=j+1; 
                int l=n-1;

                while(k<l)
                {
                    long long sum=nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];

                    if(sum<target)
                    {
                        k++;
                    }
                    else if(sum>target)
                    {
                        l--;
                    }
                    else{
                        vector<int>vec2={nums[i],nums[j],nums[k],nums[l]};
                        vec.push_back(vec2);

                        k++;
                        l--;
                        
                        while(k<l && nums[k]==nums[k-1]) k++;
                        while(k<l && nums[l]==nums[l+1]) l--;
                    }
                }
            }
        }
        return vec;
    }
};

int main()
{
    vector<int>vec={1,0,-1,0,-2,2};
    int target=0;

    vector<vector<int>> result=Solution().fourSum(vec,target);

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
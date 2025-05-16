#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // tc=O(n*log(n))
    // bool containsDuplicate(vector<int>& nums) {
    //     int n=nums.size();

    //     sort(nums.begin(),nums.end());
    //     for(int i=1; i<n; i++)
    //     {
    //         if(nums[i]==nums[i-1]){
    //             return true;
    //         }
    //     }

    //     return false;
    // }


    //using hash
    // bool containsDuplicate(vector<int>& nums) {
    //     int n=nums.size();

    //     unordered_map<int,int>mpp;

    //     for(int i=0; i<n; i++)
    //     {
    //         mpp[nums[i]]++;

    //         if(mpp[nums[i]]>=2){
    //             return true;
    //         }
    //     }
    //     return false;
    // }

    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();

        unordered_set<int>st;

        for(int i=0; i<n; i++)
        {
            if(st.count(nums[i]))
            {
                return true;
            }
            st.insert(nums[i]);
        }
        return false;
    }
};

int main()
{
    vector<int>vec={1,2,3,1};
    bool result=Solution().containsDuplicate(vec);

    if(result==true) cout<<"True"<<endl;
    else cout<<"False"<<endl;

    return 0;
}
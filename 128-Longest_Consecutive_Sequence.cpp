#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;

        int longest=1;
        
        unordered_set<int>st;
        for(int i=0; i<n; i++)
        {
            st.insert(nums[i]);
        }

        for(auto it:st)
        {
            if(st.find(it-1) == st.end())
            {
                int count=1;
                int x=it;

                while(st.find(x+1) != st.end())
                {
                    count++;
                    x=x+1;
                }
                longest=max(longest,count);
            }
        }
        return longest;
    }
};

int main()
{
    vector<int>vec={100,4,200,1,3,2};

    int result=Solution().longestConsecutive(vec);

    cout<<"Longest consecutive is: "<<result<<endl;
}
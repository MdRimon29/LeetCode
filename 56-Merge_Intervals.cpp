#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());

        for(int i=0; i<n; i++)
        {
            if(ans.empty() || ans.back()[1]<intervals[i][0])
            {
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1]=max(ans.back()[1],intervals[i][1]);
            }
        }
        return ans;
    }
};

int main()
{
    vector<vector<int>>vec={{1, 3}, {8, 10}, {2, 6}, {15, 18}};

    vector<vector<int>> result=Solution().merge(vec);

    for (auto it : result) {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }

    return 0;
}
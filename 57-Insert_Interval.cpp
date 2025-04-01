#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
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
    vector<vector<int>>vec={{1, 3}, {6,9}};
    vector<int>newInterval = {2,5};

    vector<vector<int>> result=Solution().insert(vec,newInterval);

    for (auto it : result) {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }

    return 0;
}
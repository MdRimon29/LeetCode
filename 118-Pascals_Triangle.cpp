#include<bits/stdc++.h>
using namespace std;

vector<int> pushRow(int row)
{
    long long sum=1;
    vector<int >ans;
    ans.push_back(sum);

    for(int col=1; col<row; col++)
    {
        sum = sum * (row-col);
        sum = sum / col;

        ans.push_back(sum);
    }

    return ans;
}

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;

        for(int i=1; i<=numRows; i++)
        {
            result.push_back(pushRow(i));
        }

        return result;
    }
};

int main()
{
    int row=5;

    vector<vector<int>>result=Solution().generate(row);

    for(int i=0; i<result.size(); i++)
    {
        for(int j=0; j<result[i].size(); j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}
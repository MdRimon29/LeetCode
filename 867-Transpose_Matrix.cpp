#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        vector<vector<int>>vec(m,vector<int>(n));

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                vec[j][i]=matrix[i][j];
            }
        }

        return vec;
    }
};

int main()
{
    vector<vector<int>>vec={{1,2,3},{4,5,6},{7,8,9}};

    vector<vector<int>>result=Solution().transpose(vec);

    for(int i=0; i<result.size(); i++)
    {
        for(int j=0; j<result[0].size(); j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
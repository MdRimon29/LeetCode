#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();

        //transpose the matrix
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        //reverse the row
        for(int i=0; i<n; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

int main()
{
    vector<vector<int>>vec={{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};

    Solution().rotate(vec);

    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<vec[0].size(); j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}
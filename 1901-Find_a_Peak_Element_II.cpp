#include<bits/stdc++.h>
using namespace std;

//tc is O(n*log(m))

class Solution {
    int maxInCol(vector<vector<int>>& mat, int row, int col, int mid) {
        int max = INT_MIN;
        int index = -1;
        for (int i = 0; i < row; i++) {
            if (mat[i][mid] > max) {
                max = mat[i][mid];
                index = i;
            }
        }

        return index;
    }

public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();

        int low = 0, high = m - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int maxRowNo = maxInCol(mat, n, m, mid);
            int left = mid - 1 >= 0 ? mat[maxRowNo][mid - 1] : -1;
            int right = mid + 1 < m ? mat[maxRowNo][mid + 1] : -1;

            if ((left < mat[maxRowNo][mid]) && (mat[maxRowNo][mid] > right)) {
                return {maxRowNo, mid};
            } else if (left > mat[maxRowNo][mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return {-1, -1};
    }
};

int main()
{
    vector<vector<int>>vec={{10,20,15},
                            {21,30,14},
                            {7,16,32}};

    vector<int>result=Solution().findPeakGrid(vec);

    cout<<"{"<<result[0]<<","<<result[1]<<"}"<<endl;

    return 0;
}
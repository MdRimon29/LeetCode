#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();

        int low = 0, high = (n * m) - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            //convert 1d array to 2d matrix
            int row = mid / m;
            int column = mid % m;
            int value = matrix[row][column];

            if (value == target) {
                return true;
            } else if (value > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return false;
    }
};

int main()
{
    vector<vector<int>>vec={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=23;

    bool result=Solution().searchMatrix(vec,target);
    if(result==1)
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    return 0;
}
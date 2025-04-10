#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int missing = arr[mid] - (mid + 1);

            if (missing >= k) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low + k;
    }
};

int main()
{
    vector<int>vec={2,3,4,7,11};
    int k=5;

    int result=Solution().findKthPositive(vec,k);

    cout<<result<<endl;

    return 0;
}
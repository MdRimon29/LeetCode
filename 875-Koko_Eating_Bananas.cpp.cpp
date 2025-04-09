#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findMax(piles);

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long value = dividedByMid(piles, mid);

            if (h >= value) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }

    int findMax(vector<int>& piles) {
        int maxi = INT_MIN;
        for (int i = 0; i < piles.size(); i++) {
            maxi = max(maxi, piles[i]);
        }

        return maxi;
    }

    long long dividedByMid(vector<int>& vec, int mid) {
        long long ans = 0;

        for (int i = 0; i < vec.size(); i++) {
            ans += ceil((double)vec[i] / (double)mid); // ceil value of mid
        }

        return ans;
    }
};

int main()
{
    vector<int>vec={30,11,23,4,20};
    int h=5;

    int result=Solution().dividedByMid(vec,h);

    cout<<result<<endl;
}
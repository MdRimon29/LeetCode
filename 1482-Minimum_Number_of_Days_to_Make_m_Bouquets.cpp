#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long value=1ll * m *k;
        if (n < value)
            return -1;

        int low = findMinDays(bloomDay), high = findMaxDays(bloomDay);

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int countBouquets = countBlooming(bloomDay, k, mid);

            if (countBouquets >= m) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }

    int findMinDays(vector<int>& bloomDay) {
        int mini = INT_MAX;

        for (int i = 0; i < bloomDay.size(); i++) {
            mini = min(mini, bloomDay[i]);
        }

        return mini;
    }

    int findMaxDays(vector<int>& bloomDay) {
        int maxi = INT_MIN;

        for (int i = 0; i < bloomDay.size(); i++) {
            maxi = max(maxi, bloomDay[i]);
        }

        return maxi;
    }

    int countBlooming(vector<int>& bloomday, int k, int mid) {
        int bloom = 0;
        int count = 0;
        for (int i = 0; i < bloomday.size(); i++) {
            if (mid >= bloomday[i]) {
                bloom += 1;
            } else {
                count += bloom / k;
                bloom = 0;
            }
        }

        count += bloom / k;
        return count;
    }
};

int main()
{
    vector<int>vec={7,7,7,7,12,7,7};
    int m=2;
    int k=3;

    int result=Solution().minDays(vec,m,k);

    cout<<result<<endl;
}
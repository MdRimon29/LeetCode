#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int low = 1, high = x;
        int ans = -1;

        if(x==0) return 0;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long value = mid * mid;
            if (value <= (long long)x) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};


int main()
{
    int x=4;

    int result=Solution().mySqrt(x);

    cout<<result<<endl;

    return 0;
}
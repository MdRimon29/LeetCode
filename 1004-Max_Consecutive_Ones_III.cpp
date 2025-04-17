#include<bits/stdc++.h>
using namespace std;

// worst tc->O(n+n)
// sc->O(1)
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, right = 0;
        int n = nums.size();
        int sumZero = 0, maxLen = 0;

        while (right < n) {
            if (nums[right] == 0)
                sumZero += 1;

            if (sumZero > k) {
                if (nums[left] == 0) {
                    sumZero -= 1;
                }
                left++;
            }

            if (sumZero <= k) {
                maxLen = max(maxLen, right - left + 1);
            }

            right++;
        }

        return maxLen;
    }
};

int main()
{
    vector<int>vec={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;

    int result=Solution().longestOnes(vec,k);

    cout<<result<<endl;

    return 0;
}
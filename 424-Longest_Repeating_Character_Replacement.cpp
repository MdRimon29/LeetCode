#include<bits/stdc++.h>
using namespace std;

// tc->O(n)
// sc->O(26) ~ O(1) -->as it is constant size complexity
class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, right = 0;
        int n = s.size();
        int diff = 0, maxfreq = 0, maxSum = 0;
        unordered_map<char, int> mpp;

        while (right < n) {
            mpp[s[right]]++;
            maxfreq = max(maxfreq, mpp[s[right]]);
            diff = (right - left + 1) - maxfreq;
            if (diff > k) {
                mpp[s[left]]--;
                left++;
            }

            if (diff <= k) {
                maxSum = max(maxSum, (right - left + 1));
            }

            right++;
        }

        return maxSum;
    }
};

int main()
{
    string s="ABAB";
    int k=2;

    int result=Solution().characterReplacement(s,k);

    cout<<result<<endl;

    return 0;
}
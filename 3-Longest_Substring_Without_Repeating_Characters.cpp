#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> last;
        int left = 0, ans = 0;

        for (int right = 0; right < n; right++) {
            if (last.count(s[right])) {
                left = max(left, last[s[right]] + 1);
            }

            ans = max(ans, right - left + 1);

            last[s[right]] = right;
        }

        return ans;
    }
};

int main()
{
    string s="abcabcbb";

    int result=Solution().lengthOfLongestSubstring(s);

    cout<<result<<endl;
}
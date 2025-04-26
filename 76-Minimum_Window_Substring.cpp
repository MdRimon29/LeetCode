#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty())
            return "";

        int l = 0, r = 0, n = s.size(), m = t.size();
        array<int, 128> mpp = {};
        int minLen = INT_MAX, start = -1, count = 0;
        string str;

        for (int i = 0; i < m; i++) {
            mpp[t[i]]++;
        }

        while (r < s.size()) {
            if (mpp[s[r]] > 0) {
                count++;
            }
            mpp[s[r]]--;

            while (count == m) {
                if ((r - l + 1) < minLen) {
                    minLen = r - l + 1;
                    start = l;
                }
                mpp[s[l]]++;
                if (mpp[s[l]] > 0) {
                    count--;
                }
                l++;
            }
            r = r + 1;
        }

        return start == -1 ? "" : s.substr(start, minLen);
    }
};

int main()
{
    string s="ADOBECODEBANC";
    string t="ABC";

    string result=Solution().minWindow(s,t);

    cout<<result<<endl;
}
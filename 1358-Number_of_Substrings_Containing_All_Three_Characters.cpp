#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        unordered_map<int, int> mpp = {{0, -1}, {1, -1}, {2, -1}};
        int count = 0;

        for (int i = 0; i < n; i++) {
            mpp[s[i] - 'a'] = i;

            if ((mpp[0] != -1) && (mpp[1] != -1) && (mpp[2] != -1)) {
                count += min(mpp[0], min(mpp[1], mpp[2])) + 1;
            }
        }

        return count;
    }
};

int main()
{
    string s="abcabc";

    int result=Solution().numberOfSubstrings(s);

    cout<<result<<endl;

    return 0;
}
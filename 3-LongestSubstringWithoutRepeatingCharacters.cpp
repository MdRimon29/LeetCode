#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0,big=0;
        unordered_set<char>charSet;

        while(right<s.length())
        {
            if(charSet.find(s[right]) != charSet.end())
            {
                charSet.erase(s[left]);
                left++;
            }
            else
            {
                charSet.insert(s[right]);
                big=max(big, right-left+1);
                right++;
            }
        }
        return big;
    }
};

int main()
{
    string s="abcabcbb";

    int result=Solution().lengthOfLongestSubstring(s);

    cout<<result<<endl;
}
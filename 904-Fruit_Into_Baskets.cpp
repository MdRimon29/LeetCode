#include<bits/stdc++.h>
using namespace std;

// tc->O(n)
// sc->O(3) ~ O(1) -->as it is constant size complexity
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int k=2;
        int left = 0, right = 0;
        int n = fruits.size();
        int sum = 0, maxLen = 0;
        unordered_map<int, int> mpp;

        while (right < n) {
            mpp[fruits[right]]++;

            if (mpp.size() > k) {
                mpp[fruits[left]]--;
                if (mpp[fruits[left]] == 0) {
                    mpp.erase(fruits[left]);
                }
                left++;
            }

            if (mpp.size() <= k)
                maxLen = max(maxLen, right - left + 1);

            right++;
        }

        return maxLen;
    }
};

int main()
{
    vector<int>vec={3,3,3,1,2,1,1,2,2,3,3};
    int k=2;

    int result=Solution().totalFruit(vec);

    cout<<result<<endl;

    return 0;
}
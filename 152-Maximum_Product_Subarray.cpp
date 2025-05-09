#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int suffix = 1;
        int prefix = 1;
        int n = nums.size();
        int maxi = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (prefix == 0)
                prefix = 1;
            if (suffix == 0)
                suffix = 1;

            prefix *= nums[i];
            suffix *= nums[n - i - 1];
            maxi = max(maxi, max(prefix, suffix));
        }

        return maxi;
    }
};

int main()
{
    vector<int>vec={2,3,-2,4};

    int result=Solution().maxProduct(vec);

    cout<<result<<endl;
}
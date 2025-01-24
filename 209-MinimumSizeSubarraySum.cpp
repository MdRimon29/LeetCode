#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r = 1;
        if (target == nums[l]) {
            return 1;
        }
        int total = nums[l] + nums[r];
        int min_len = INT_MAX;

        while (r >= l && r < nums.size()) {
            if (total == target) {
                min_len = min(min_len, r - l + 1);
                l++;
                r++;
                if (r < nums.size()) total=total+nums[r]-nums[l];
            }
            else if (total > target) {
                min_len = min(min_len, r - l + 1);
                l++;
                total=total-nums[l];
            }
            else {
                r++;
                if (r < nums.size()) {
                    total=total+nums[r]-nums[l];
                }
            }
            
        }
        return (min_len == INT_MAX) ? 0 : min_len;
    }
};

int main()
{
    int target=11;
    vector<int>nums={1,1,1,1,1,1,1,1};

    int result=Solution().minSubArrayLen(target,nums);

    cout<<result<<endl;
}
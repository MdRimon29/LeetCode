#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1, mini = INT_MAX;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // if array contain duplicates
            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                mini = min(mini, nums[low]);
                low = low + 1;
                high = high - 1;
                continue;
            }

            // left sorted
            if (nums[low] <= nums[mid]) {
                mini = min(mini, nums[low]);
                low = mid + 1;
            }
            // right sorted
            else {
                mini = min(mini, nums[mid]);
                high = mid - 1;
            }
        }

        return mini;
    }
};

int main()
{
    vector<int>vec={4,5,6,7,0,1,2};

    int result=Solution().findMin(vec);

    cout<<result<<endl;
}
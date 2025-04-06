#include<bits/stdc++.h>
using namespace std;

class Solution {
    int firstOccurance(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, first = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                first = mid;
                high = mid - 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return first;
    }

    int lastOccurance(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, last = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                last = mid;
                low = mid + 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return last;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOccurance(nums, target);
        if (first == -1)
            return {-1, -1};
        return {first, lastOccurance(nums, target)};
    }
};

int main()
{
    vector<int>nums={5,7,7,8,8,10};
    int target=8;

    vector<int>result=Solution().searchRange(nums,target);

    cout<<'['<<result[0]<<','<<result[1]<<']'<<endl;

    return 0;
}
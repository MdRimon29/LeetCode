#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        if (nums.size() < k)
            return -1;

        int n = nums.size();
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int partition = countArr(nums, mid);

            if (partition > k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return low;
    }

    int countArr(vector<int>& nums, int mid) {
        int n = nums.size();
        int sumArr = 1;
        long long valueArr = 0;

        for (int i = 0; i < n; i++) {
            if (valueArr + nums[i] <= mid) {
                valueArr += nums[i];
            } else {
                sumArr += 1;
                valueArr = nums[i];
            }
        }
        return sumArr;
    }
};

int main()
{
    vector<int>vec={7,2,5,10,8};
    int k=2;

    int result=Solution().splitArray(vec,k);

    cout<<result<<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

// tc=O(2*n)
// sc=O(n)
class Solution {
    int subarrays(vector<int>& nums, int k) {
        int l = 0, r = 0;
        unordered_map<int, int> mpp;
        int count = 0;

        while (r < nums.size()) {
            mpp[nums[r]]++;

            while (mpp.size() > k) {
                mpp[nums[l]]--;
                if (mpp[nums[l]] == 0)
                    mpp.erase(nums[l]);
                l++;
            }

            count += (r - l + 1);

            r++;
        }

        return count;
    }

public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int num1 = subarrays(nums, k);
        int num2 = subarrays(nums, k - 1);

        return num1 - num2;
    }
};

int main()
{
    vector<int>vec={1,2,1,2,3};
    int k=2;

    int result=Solution().subarraysWithKDistinct(vec,k);

    cout<<result<<endl;
}
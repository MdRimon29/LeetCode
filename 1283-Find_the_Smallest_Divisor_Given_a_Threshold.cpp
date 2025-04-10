#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        if (n > threshold)
            return -1;

        int low = 1, high = *max_element(nums.begin(), nums.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int sum = sumDivision(nums, mid);

            if (sum <= threshold) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }

    int sumDivision(vector<int>& nums, int mid) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            count += ceil((double)nums[i] / (double)mid);
        }
        return count;
    }
};

int main()
{
    vector<int>vec={44,22,33,11,1};
    int threshold=5;

    int result=Solution().smallestDivisor(vec,threshold);

    cout<<result<<endl;
}
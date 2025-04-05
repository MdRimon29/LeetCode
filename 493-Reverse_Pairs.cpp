#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return margeSort(nums, 0, n - 1);
    }

private:
    void marge(vector<int>& nums, int low, int mid, int high) {
        vector<int> vec;
        int n = nums.size();
        int left = low;
        int right = mid + 1;

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                vec.push_back(nums[left]);
                left++;
            } else {
                vec.push_back(nums[right]);
                right++;
            }
        }

        while (left <= mid) {
            vec.push_back(nums[left]);
            left++;
        }

        while (right <= high) {
            vec.push_back(nums[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            nums[i] = vec[i - low];
        }
    }

    int countPair(vector<int>& nums, int low, int mid, int high) {
        int right = mid + 1;
        int count = 0;
        for (int i = low; i <= mid; i++) {
            while (right <= high && nums[i] > 2LL * nums[right]) {
                right++;
            }
            count += (right - (mid + 1));
        }

        return count;
    }

    int margeSort(vector<int>& nums, int low, int high) {
        int count = 0;
        if (low == high)
            return count;
        int mid = (low + high) / 2;
        count += margeSort(nums, low, mid);
        count += margeSort(nums, mid + 1, high);
        count += countPair(nums, low, mid, high);
        marge(nums, low, mid, high);

        return count;
    }
};

int main()
{
    vector<int>vec={1,3,2,3,1};

    int result=Solution().reversePairs(vec);

    cout<<result<<endl;

    return 0;
}
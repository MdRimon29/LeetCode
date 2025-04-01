#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = m + n - 1;
        while (m > 0 && n > 0) {
            if (nums1[m - 1] > nums2[n - 1]) {
                nums1[len] = nums1[m - 1];
                m--;
            } else {
                nums1[len] = nums2[n - 1];
                n--;
            }
            len--;
        }
        while (n > 0) {
            nums1[len] = nums2[n - 1];
            len--;
            n--;
        }
    }
};

int main()
{
    vector<int>vec={2,2,3,0,0,0};
    int m=3;
    vector<int>vec2={1,5,6};
    int n=3;
    Solution().merge(vec,m,vec2,n);

    for(auto it:vec)
    {
        cout<<it<<" ";
    }

    return 0;
}
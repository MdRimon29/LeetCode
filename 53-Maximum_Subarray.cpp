#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int sum = 0;
            int maximum = nums[0];
            for (int i = 0; i < nums.size(); i++) {
                if (sum < 0) 
                {
                    sum = 0;
                }
                sum += nums[i];
                maximum = max(maximum, sum);
            }
    
            return maximum;
        }
    };

int main(){
    vector<int>vec={-1};

    int result=Solution().maxSubArray(vec);

    cout<<"Result is: "<<result<<endl;
}
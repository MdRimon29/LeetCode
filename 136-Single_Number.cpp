#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int XOR = 0;
            for (int i = 0; i < nums.size(); i++) {
                XOR = XOR ^ nums[i];
            }
    
            return XOR;
        }
};

int main()
{
    vector<int>vec={1,1,2,3,3,4,4};

    Solution object;
    int result=object.singleNumber(vec);
    cout<<"Result is: "<<result<<endl;
}
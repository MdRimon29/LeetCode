#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) 
        {
            int i=0;
            for(int j=1; j<nums.size(); j++)
            {
                if(nums[j]!=nums[i])
                {
                    nums[i+1]=nums[j];
                    i++;
                }
            }
            return i+1;
        }
};
int main()
{
    vector<int>nums={0,0,1,1,1,2,2,3,3,4};

    int result = (new Solution())->removeDuplicates(nums);

    cout << result << endl; 

    for (int i = 0; i < result; i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}
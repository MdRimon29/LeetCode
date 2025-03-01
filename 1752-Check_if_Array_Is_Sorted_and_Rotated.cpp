#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool check(vector<int>& nums) {
            int n=nums.size();
            int count=1;
            for(int i=1; i<2*n; i++)
            {
                if(nums[(i-1)%n]<=nums[i%n])
                {
                    count++;
                }
                else
                {
                    count=1;
                }

                if(count==n)
                {
                    return true;
                }
            }
            return n==1; //for corner cases like, vec={5}
        }
};

int main()
{
    vector<int>vec={3,4,5,1,2};

    Solution sol;
    bool result=sol.check(vec);

    if(result)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
}
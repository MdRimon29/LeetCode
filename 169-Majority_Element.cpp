#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int element;
        for(int i=0; i<nums.size(); i++){
            if(count==0)
            {
                count++;
                element=nums[i];
            }
            else if(nums[i]==element){
                count++;
            }
            else{
                count--;
            }
        }

        int count2=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==element) count2++;
        }

        if(count2>nums.size()/2){
            return element;
        }

        return -1;
    }
};

int main()
{
    vector<int>vec={2,2,1,1,1,2,2};

    int result=Solution().majorityElement(vec);

    cout<<"Majority elememt is: "<<result<<endl;

    return 0;
}
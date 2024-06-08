#include<bits/stdc++.h>
using namespace std;
//two pointer approach,work with sorted array

class Solution
{
    public:
        vector<int> twoSum(vector<int>& numbers, int target)
    {
        int left=0,right =numbers.size()-1;

        while(left<right)
        {
            if(numbers[left]+numbers[right]==target)
            {
                return {left+1,right+1};
            }
            else if(numbers[left]+numbers[right]<target)
            {
                left++;
            }
            else{
                right--;
            }
        }
        return {};
    }
};
int main()
{
    vector<int>numbers={2,7,11,15};
    int target=9;

    vector<int>result=Solution().twoSum(numbers,target);
    
    for(int i=0; i<result.size(); i++)
    {
        cout<<result[i]<<" ";
    }

    return 0; 
}
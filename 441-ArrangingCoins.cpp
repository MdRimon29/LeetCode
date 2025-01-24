#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        int left=1,right=n;
        int result=0;

        while(left<=right)
        {
            int mid=left+(right-left)/2;
            long long NumberOfCoins=(long long) mid*(mid+1)/2;
            if(NumberOfCoins>n)
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
                result=mid;
            }
        }
        return result;
    }
};

int main()
{
    int n=10;
    int result=Solution().arrangeCoins(n);
    cout<<result<<endl;
    return 0;
}
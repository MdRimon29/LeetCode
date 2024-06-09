#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int left=1,right=x,sol=0;
        if(x==0)
        {
            return 0;
        }
        while (left<=right)
        {
            int mid=left+(right-left)/2;
            
            if(x/mid==mid)
            {
                return mid;
            }
            else if(x/mid<mid)
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
                sol=mid;
            }
        }
        return sol;
    }
};

int main()
{
    int x=1;

    int result=Solution().mySqrt(x);

    cout<<result<<endl;

    return 0;
}
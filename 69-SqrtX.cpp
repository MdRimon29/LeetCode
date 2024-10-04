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
                sol=mid;    //it say lowerbound so sol= mid in here,if its say upperbound then guess where
            }
        }
        return sol;
    }
};


int main()
{
    int x=4;

    int result=Solution().mySqrt(x);

    cout<<result<<endl;

    return 0;
}
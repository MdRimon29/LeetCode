#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0,right=1,profit,maximum=0;
        int n=prices.size();
        
        while(right<n)
        {
            if(prices[left]<prices[right])
            {
                profit=prices[right]-prices[left];
                maximum=max(profit,maximum);                
            }
            else
            {
                left =right;                
            }
            right +=1;
        }
        return maximum;
    }
};

int main()
{
    vector<int>price={2,1,2,1,0,1,2};

    int result=Solution().maxProfit(price);

    cout<<result<<endl;
    return 0;
}
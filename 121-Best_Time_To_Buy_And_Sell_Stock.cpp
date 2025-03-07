#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minimum=prices[0];

        for(int i=1; i<prices.size(); i++)
        {
            int profit=prices[i]-minimum;
            maxprofit=max(profit,maxprofit);

            minimum=min(minimum,prices[i]);
        }

        return maxprofit;
    }
};

int main()
{
    vector<int>price={2,1,2,1,0,1,2};

    int result=Solution().maxProfit(price);

    cout<<result<<endl;
    return 0;
}
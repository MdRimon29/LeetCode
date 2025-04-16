#include<bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int lScore = 0, rScore = 0, maxSc = 0;

        for (int i = 0; i < k; i++) {
            lScore += cardPoints[i];
            maxSc = max(maxSc, lScore);
        }

        int rIndex = n - 1;
        for (int i = k - 1; i >= 0; i--) {
            lScore -= cardPoints[i];
            rScore += cardPoints[rIndex];

            maxSc = max(maxSc, lScore + rScore);

            rIndex -= 1;
        }

        return maxSc;
    }
};

int main()
{
    vector<int>vec={1,2,3,4,5,6,1};
    int k=3;

    int result=Solution().maxScore(vec,k);

    cout<<result<<endl;
}
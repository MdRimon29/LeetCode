#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left=0,right=letters.size()-1,mid;
        if(letters[right]<=target)
        {
            return letters[0];
        }
        while(left<=right)
        {
            mid=left+(right-left)/2;

            if(letters[mid]<=target)
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        return letters[left];
    }
};

int main()
{
    vector<char>letters={'c','f','j'};
    char target='j';

    char result=Solution().nextGreatestLetter(letters,target);

    cout<<'"'<<result<<'"'<<endl;

    return 0;
}
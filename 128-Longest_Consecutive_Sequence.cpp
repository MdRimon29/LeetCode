#include<bits/stdc++.h>
using namespace std;

int longestConsecutiveOptimal(vector<int>&vec)
{
    int n=vec.size();
    if(n==0) return 0;

    int longest=1;
    unordered_set<int>st;

    for(int i=0; i<n; i++)
    {
        st.insert(vec[i]);
    }

    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int cnt=1;
            int x=it;
            while(st.find(x+1) != st.end()){
                x=x+1;
                cnt=cnt+1;
            }
            longest=max(longest,cnt);
        }
    }

    return longest;
}

int main()
{
    vector<int>vec={102,4,100,1,101,3,2,1,1};

    int result=longestConsecutiveOptimal(vec);

    cout<<"Longest consecutive is: "<<result<<endl;
}
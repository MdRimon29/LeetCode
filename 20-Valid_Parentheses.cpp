#include<bits/stdc++.h>
using namespace std;

//tc=O(n)
//sc=O(n)
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if (st.empty()) {
                    return false;
                }
                char ch = st.top();
                st.pop();
                if ((ch == '(' && s[i] == ')') || (ch == '{' && s[i] == '}') ||
                    (ch == '[' && s[i] == ']')) {
                    continue;
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};

int main()
{
    string s="()[]{}";

    bool result=Solution().isValid(s);

    if(result==false){
        cout<<"False"<<endl;
    }
    else{
        cout<<"True"<<endl;
    }
    
    return 0;
}
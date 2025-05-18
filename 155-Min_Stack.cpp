#include<bits/stdc++.h>
using namespace std;

//tc=O(1)
//sc=O(2*n)
// class MinStack {
// public:
//     MinStack() {
        
//     }
//     stack<int>st;
//     stack<int>minmm;
    
//     void push(int val) {
//         if(minmm.empty()){
//             minmm.push(val);
//         }
//         else if(minmm.top()>=val){
//             minmm.push(val);
//         }
//         else{
//             minmm.push(minmm.top());
//         }
//         st.push(val);
//     }
    
//     void pop() {
//         st.pop();
//         minmm.pop();
//     }
    
//     int top() {
//         return st.top();
//     }
    
//     int getMin() {
//         return minmm.top();
//     }
// };

class MinStack {
public:
    MinStack() {}
    
    stack<pair<int,int>>st;
    
    void push(int val) {
        int minm;
        if(st.empty()){
            minm=val;
        }
        else{
            minm=min(val,st.top().second);
        }
        st.push({val,minm});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};

int main()
{
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout << "Current min: " << minStack.getMin() << endl; // Returns -3
    minStack.pop();
    cout << "Top element: " << minStack.top() << endl;    // Returns 0
    cout << "Current min: " << minStack.getMin() << endl; // Returns -2
    return 0;
}
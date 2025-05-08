#include<bits/stdc++.h>
using namespace std;

class MyStack {
    queue<int>q;
public:
    MyStack() {
    }
    
    void push(int x) {
        int l=q.size();
        q.push(x);
        for (int i=0; i<l; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int x=q.front();
        q.pop();
        return x;
    }
    
    int top() {
        int x=q.front();
        return x;
    }
    
    bool empty() {
        if(q.empty()){
            return true;
        }
        
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

int main()
{
    MyStack s;
    s.push(3);
    s.push(2);
    s.push(4);
    s.push(1);
    cout << "Top of the stack: " << s.top() << endl;
    cout << "Is stack empty? : " << s.empty() << endl;
    cout << "The deleted element is: " << s.pop() << endl;
    cout << "Top of the stack after removing element: " << s.top() << endl;
    cout << "Is stack empty? : " << s.empty();
}
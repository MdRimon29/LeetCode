#include<bits/stdc++.h>
using namespace std;

// s1->s2
// x->s1
// s2->s1
class MyQueue {
public:
    stack<int>s1,s2;

    void push(int x) {
        while (s1.size())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while (s2.size())
        {
            s1.push(s2.top());
            s2.pop();
        }       
    }
    
    int pop() {
        int result=s1.top();
        s1.pop();
        return result;   
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};

int main()
{
    MyQueue q;
    q.push(3);
    q.push(4);
    cout << "The element poped is " << q.pop() << endl;
    q.push(5);
    cout << "The top of the queue is " << q.peek() << endl;
}
#include <bits/stdc++.h>
using namespace std;
#define v vector

class MyStack {
public:

    queue<int> q1, q2;

    MyStack() {
        
    }
    
    // void push(int x) {

    //     q2.push(x);

    //     while(!q1.empty())
    //     {
    //         q2.push(q1.front());
    //         q1.pop();
    //     }

    //     queue<int> q = q1;
    //     q1 = q2;
    //     q2 = q;
    // }
    
    void push(int x) {
        
        int size = q1.size();
        q1.push(x);

        for(int i=0; i<size; i++)
        {
            q1.push(q1.front());
            q1.pop();
        }
    }

    int pop() {
        int temp = q1.front();
        q1.pop();
        return temp;
    }
    
    int top() {
       return q1.front(); 
    }
    
    bool empty() {
        return q1.empty();
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
    

    return 0;
}
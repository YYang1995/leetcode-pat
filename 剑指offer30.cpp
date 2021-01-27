#include<deque>
#include<stack>
using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
      
    }
    
    void push(int x) {
        stack1.push(x);
        if(x<stack_min.top())
            stack_min.push(x);
    }
    
    void pop() {
        int temp=stack1.top();
        if(stack_min.top()==temp)
            stack_min.pop();
        stack1.pop();
    }
    
    int top() {
        return stack1.top();
    }
    
    int min() {
        return stack_min.top();
    }
private:
    stack<int> stack1;
    stack<int> stack_min;
};
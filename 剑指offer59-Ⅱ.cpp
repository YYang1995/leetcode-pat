//https://leetcode-cn.com/problems/dui-lie-de-zui-da-zhi-lcof/
#include<deque>
using namespace std;


class MaxQueue {
public:
    MaxQueue() {

    }
    
    int max_value() {
        if(deq.empty())
            return -1;
        else
        {
            return deq_max.front();
        }
        
    }
    
    void push_back(int value) {
        deq.push_back(value);
        if(deq_max.empty())
            deq_max.push_back(value);
        while(!deq_max.empty()&&deq_max.back()<=value) //这里的“=”不可少！！！
            deq_max.pop_back();
        deq_max.push_back(value);
    }
    
    int pop_front() {
        if(deq.empty())
            return -1;
        int temp=deq.front();
        deq.pop_front();
        if(deq_max.front()==temp)
            deq_max.pop_front();
        return temp;
    }
private:
    deque<int> deq;
    deque<int> deq_max;
};

/**
 * Your MaxQueue object will be instantiated and called as such:
 * MaxQueue* obj = new MaxQueue();
 * int param_1 = obj->max_value();
 * obj->push_back(value);
 * int param_3 = obj->pop_front();
 */
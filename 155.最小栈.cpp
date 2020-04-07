#include <iostream>
#include <stack>
using namespace std;
class MinStack {
public:
    stack<int> data;
    stack<int> helper;
    MinStack() {
    }
    
    void push(int x) {
        data.push(x);
        if(helper.empty() || x<helper.top()){
            helper.push(x);
        } else {
            helper.push(helper.top());
        }
    }
    
    void pop() {
        if(!data.empty()){
            helper.pop();
            data.pop();
        }
    }
    
    int top() {
        if(!data.empty()){
            return data.top();
        }
        else {
            return -1;
        }
    }
    
    int getMin() {
        return helper.top();
    }
};

int main(){
    MinStack m;
    m.push(-2);
    m.push(-3);
    m.push(0);
    cout<<m.getMin()<<endl;
    m.pop();
    m.pop();
    cout<<m.getMin()<<endl;
}
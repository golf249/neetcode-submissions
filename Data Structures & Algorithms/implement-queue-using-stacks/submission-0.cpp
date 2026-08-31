class MyQueue {
    stack<int> s1;
    stack<int> s2;
public:
    MyQueue() {
    }
    
    void push(int x) {
       s1.push(x);
    }
    
    int pop() {
       while (!s1.empty()) {
            int num = s1.top();
            s2.push(num);
            s1.pop();
       }
       int num = s2.top();
       s2.pop();
       while (!s2.empty()) {
            int num = s2.top();
            s1.push(num);
            s2.pop();
       } 
       return num;
    }
    
    int peek() {
       while (!s1.empty()) {
            int num = s1.top();
            s2.push(num);
            s1.pop();
       }
       int num = s2.top();
       while (!s2.empty()) {
            int num = s2.top();
            s1.push(num);
            s2.pop();
       } 
       return num;
    }
    
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
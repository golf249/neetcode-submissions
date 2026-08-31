class MyStack {
    queue<int> q1;
public:
    MyStack() {
        
    }
    
    void push(int x) {
       q1.push(x); 
    }
    
    int pop() {
       for (int i = 0; i < q1.size() - 1; i++) {
            int num = q1.front();
            q1.pop();
            q1.push(num);
       } 
       int num = q1.front();
       q1.pop();
        return num;
    }
    
    int top() {
        for (int i = 0; i < q1.size() - 1; i++) {
            int num = q1.front();
            q1.pop();
            q1.push(num);
        } 
        int num = q1.front();
        q1.pop();
        q1.push(num);
        return num;
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
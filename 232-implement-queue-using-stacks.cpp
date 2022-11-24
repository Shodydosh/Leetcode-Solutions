class MyQueue {
    stack<int> input, output;
public:
    MyQueue() {
        
    }

    void connect() {
        while(input.size()) {
            output.push(input.top());
            input.pop();
        }
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() { 
        if (output.empty()) {
            connect();
        }
        int x = output.top();
        output.pop();
        return x;
    }
    
    int peek() {
        if (output.empty()) {
            connect();
        }
        return output.top();
    }
    
    bool empty() {
        return output.empty() && input.empty();
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

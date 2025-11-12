class MyQueue {
    private:
    stack<int>ip;
    stack<int>op;
    int topa=-1;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        if(ip.empty()) topa=x;
      ip.push(x);   
    }
    
    int pop() {
        if(op.empty()){
            while(!ip.empty()){
                op.push(ip.top());
                ip.pop();
            }
        }
        int topa=op.top();
        op.pop();
        return topa;
    }
    
    int peek() {
      if(op.empty()) return topa;
      else
      return op.top();
    }
    
    bool empty() {
     if(ip.empty() && op.empty()) return true;
     else
     return false;   
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
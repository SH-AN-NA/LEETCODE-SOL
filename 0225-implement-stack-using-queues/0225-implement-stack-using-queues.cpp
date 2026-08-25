class MyStack {
private:
    queue<int> q ;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x) ;
        int sz = q.size() ;

        for(int i = 0 ; i < sz-1 ; i++) {
            q.push(q.front()) ;
            q.pop() ;
        }
    }
    
    int pop() {
        int topVal = q.front();
        q.pop();
        return topVal;
    }
    
    int top() {
        return q.front() ;
    }
    
    bool empty() {
        return q.size() == 0 ;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->front();
 * bool param_4 = obj->empty();
 */
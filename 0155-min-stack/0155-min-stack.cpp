class MinStack {
public:
    vector<int> st;
    MinStack() {
        
    }
    
    void push(int val) {
       st.push_back(val) ;  
    }
    
    void pop() {
       st.pop_back() ;  
    }
    
    int top() {
        return st.back()  ; 
    }
    
    int getMin() {
        int mn = INT_MAX ; 
       for(auto i : st ){
        mn = min(mn , i) ; 
       } 
       return mn ; 
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
class MinStack {
public:
stack<int>st;
stack<int>res;
//vector<int>res;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        
        stack<int>ss;
        while(!res.empty() && res.top()<val){
            ss.push(res.top());
            res.pop();
        }

        res.push(val);
        while(!ss.empty()){
            res.push(ss.top());
            ss.pop();
        }
        
    }
    
    void pop() {
        int el;
        if(!st.empty()){
            el=st.top();

            stack<int>ss;
            while(!res.empty()&& res.top()!=el){
                ss.push(res.top());
                res.pop();

            }
            res.pop();
            while(!ss.empty()){
                res.push(ss.top());
                ss.pop();
            }
            st.pop();
        }
        
    }
    
    int top() {
        if(!st.empty()){
            
            return st.top();
        }
        
    }
    
    int getMin() {
       return res.top();
        
    }
};

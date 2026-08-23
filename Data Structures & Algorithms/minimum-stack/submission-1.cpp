class MinStack {
public:
stack<int>st;
stack<int>res;

//avoid sort stack complexity and create simple optimizations..
//vector<int>res;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
        st.push(val);
        
        //res.push(min(val, res.top()));
        res.push(val);
        }
        else{
             st.push(val);
        
            res.push(min(val, res.top()));

        }
        // st.push(val);
        
        // stack<int>ss;
        // while(!res.empty() && res.top()<val){
        //     ss.push(res.top());
        //     res.pop();
        // }

        // res.push(val);
        // while(!ss.empty()){
        //     res.push(ss.top());
        //     ss.pop();
        // }
        
    }
    
    void pop() {
        if(!st.empty()){
            st.pop();
            res.pop();
        }
        // int el;
        // if(!st.empty()){
        //     el=st.top();

        //     stack<int>ss;
        //     while(!res.empty()&& res.top()!=el){
        //         ss.push(res.top());
        //         res.pop();

        //     }
        //     res.pop();
        //     while(!ss.empty()){
        //         res.push(ss.top());
        //         ss.pop();
        //     }
        //     st.pop();
        // }
        
    }
    
    int top() {
        if(!st.empty()){
            
            return st.top();
        }

        return -1;
        
    }
    
    int getMin() {
        if(!st.empty()){
       return res.top();
        }
        return -1;
        
    }
};

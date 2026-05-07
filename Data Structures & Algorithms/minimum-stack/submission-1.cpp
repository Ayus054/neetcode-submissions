class MinStack {
public:
vector<int>v;
        
    MinStack() {
    }
    
    void push(int val) {
        v.push_back(val);
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        int i;
        for(int it:v)
        {
            i=it;
        }
        return i;
    }
    
    int getMin() {
        int i=INT_MAX;
        for(int it:v)
        {
            i=min(i,it);
        }
        return i;
    }
};

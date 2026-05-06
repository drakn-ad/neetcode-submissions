class MinStack {
public:
    stack<int> elbolbol;
    MinStack() {
        
    }
    
    void push(int val) {
        elbolbol.push(val);
    }
    
    void pop() {
        elbolbol.pop();
    }
    
    int top() {
        return elbolbol.top();
    }
    
    int getMin() {
        stack<int> tempoooo;
        int soghaiar = elbolbol.top();
        while(elbolbol.size()){
            soghaiar = min(soghaiar,elbolbol.top());
            tempoooo.push(elbolbol.top());
            elbolbol.pop();
        }
        while(tempoooo.size()){
            elbolbol.push(tempoooo.top());
            tempoooo.pop();
        }
        return soghaiar;
    }
};

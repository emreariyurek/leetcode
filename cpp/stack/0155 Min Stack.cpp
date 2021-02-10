class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int x) {
        if (m_aux.empty() || x <= m_aux.top())
            m_aux.push(x);
        m_stk.push(x);
    }
    
    void pop() {
        if (m_stk.top() == m_aux.top())
            m_aux.pop();
        m_stk.pop();
    }
    
    int top() {
        return m_stk.top();
    }
    
    int getMin() {
        return m_aux.top();
    }

private:
    stack<int> m_stk;
    stack<int> m_aux;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
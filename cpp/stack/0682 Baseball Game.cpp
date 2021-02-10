class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        for (const auto &op : ops) {
            if (op == "+") {
                int top = s.top(); 
                s.pop(); 
                int sum = top + s.top();
                s.push(top);
                s.push(sum);
            } else if (op == "D") {
                s.push(s.top() * 2);
            } else if (op == "C") {
                s.pop();
            } else {
                s.push(stoi(op));
            }
        }
        
        int sum = 0;
        while (!s.empty()) {
            sum += s.top();
            s.pop();
        }
        
        return sum;
    }
};
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        for (const auto &c : s) {
            if (c == ')' 
                && !st.empty() && st.top() == '(') {
                st.pop();
            } else {
                st.push(c);
            }
        }
        
        return st.size();
    }
};
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ans(code.size());
        if (k == 0)
            return ans;
        
        int n = code.size();
        for (int i = 0; i < n; i++) {
            int sum = 0;
            if (k > 0) {
                for (int j = 1; j <= k; j++) 
                    sum += code[(i + j) % n];
            } else {
                for (int j = 1; j <= abs(k); j++) 
                    sum += code[(n - j + i) % n];
            }
            ans[i] = sum;
        }
        
        return ans;
    }
};
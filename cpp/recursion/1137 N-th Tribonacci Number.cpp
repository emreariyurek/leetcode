class Solution {
public:
    int tribonacci(int n) {
        int f[38] = { 0, 1, 1 };
        for (int i = 3; i <= n; i++) {
            f[i] = f[i - 3] + f[i - 2] + f[i - 1]; 
        }
        
        return f[n];
    }
};
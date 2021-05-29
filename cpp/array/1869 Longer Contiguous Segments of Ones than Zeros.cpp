class Solution {
public:
    bool checkZeroOnes(string s) {
        int count_zero = 0, count_one = 0;
        int max_count_zero = 0, max_count_one = 0; 
        for (const auto &c : s) {
            if (c == '0') {
                count_one = 0;
                max_count_zero = max(max_count_zero, ++count_zero);
            } else {
                count_zero = 0;
                max_count_one = max(max_count_one, ++count_one);
            }
        }
        
        return max_count_one > max_count_zero;
    }
};
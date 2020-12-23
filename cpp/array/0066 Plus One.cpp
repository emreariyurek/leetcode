class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        int carry = 1;
        int idx = digits.size();
        while (idx--) {
            int sum = digits[idx] + carry;
            carry = sum / 10;
            result.push_back(sum % 10);
        }
        
        if (carry == 1)
            result.push_back(1);
        
        reverse(result.begin(), result.end());
        return result;
    }
};
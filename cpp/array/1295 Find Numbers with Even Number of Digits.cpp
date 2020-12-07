class Solution {
public:
    int findNumbers(vector<int> &nums) {
        int count = 0;
        for (int num : nums) {
            int digits = 1;
            while (num /= 10) digits++;
            if (digits % 2 == 0)
                count++;
        }
        
        return count;
    }
};
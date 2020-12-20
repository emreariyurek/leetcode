class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;
        for (const auto &num : nums) {
            if (num == 1) {
                count++;
                if (maxCount < count)
                    maxCount = count;
            } else {
                count = 0;
            }
        }
        
        return maxCount;
    }
};
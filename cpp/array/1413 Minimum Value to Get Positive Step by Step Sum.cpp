class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0;
        int start = sum;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sum < start) 
                start = sum;
        }
        
        return abs(start) + 1;
    }
};
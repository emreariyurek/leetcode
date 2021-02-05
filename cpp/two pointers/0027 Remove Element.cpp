class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int idx = 0;
        for (const auto &num : nums) {
            if (num != val) 
                nums[idx++] = num;
        }
        
        return idx;
    }
};
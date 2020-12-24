class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty())
            return 0;
        
        int idx = 1;
        int current = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (current != nums[i]) {
                nums[idx++] = nums[i];
                current = nums[i];
            }
        }
        
        return idx;
    }
};
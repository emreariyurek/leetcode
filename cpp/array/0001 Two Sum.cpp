class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mymap;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (mymap.find(diff) != mymap.end())
                return {mymap[diff], i}; 
            mymap[nums[i]] = i;
        }
        
        return nums;
    }
};
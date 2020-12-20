class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> myset;
        for (const auto &num : nums) {
            if (myset.find(num) != myset.end())
                return true;
            myset.insert(num);
        }
        
        return false;
    }
};
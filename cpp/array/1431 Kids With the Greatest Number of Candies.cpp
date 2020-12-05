class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size());
        int max = *std::max_element(candies.begin(), candies.end());
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= max)
                ans[i] = true;
        }
        
        return ans;
    }
};
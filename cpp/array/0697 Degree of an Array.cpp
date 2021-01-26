class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int degree = 0;
        int result = INT_MAX;
        map<int, int> mfreq, midx;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (midx.find(num) == midx.end())
                midx[num] = i;
            
            mfreq[num]++;
            if (mfreq[num] > degree) {
                degree = mfreq[num];
                result = i - midx[num] + 1;
            } else if (mfreq[num] == degree) {
                result = min(result, i - midx[num] + 1);
            }
        }
        
        return result;
    }
};
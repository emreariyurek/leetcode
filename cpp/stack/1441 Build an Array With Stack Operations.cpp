class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result;
        for (int i = 1, j = 0; i <= n && j < target.size(); i++) {
            result.push_back("Push");
            if (i == target[j]) 
                j++;
            else
                result.push_back("Pop");
        }
        
        return result;
    }
};
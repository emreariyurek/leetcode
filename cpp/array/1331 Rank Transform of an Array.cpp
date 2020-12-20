class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        auto copied = arr;
        sort(copied.begin(), copied.end());
        
        int rank = 1;
        unordered_map<int, int> mymap;
        for (const auto &num : copied) {
            if (mymap.find(num) == mymap.end())
                mymap[num] = rank++;
        }
        
        vector<int> result;
        for (const auto &num : arr) 
            result.push_back(mymap[num]);
        
        return result;
    }
};
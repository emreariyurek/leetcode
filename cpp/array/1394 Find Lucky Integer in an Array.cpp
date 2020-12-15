class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> mymap;
        for (const auto &num : arr) 
            mymap[num]++;
        
        int max = -1;
        for (const auto &[k, v] : mymap) {
            if (k == v && max < v)
                max = v;
        }
        
        return max;
    }
};
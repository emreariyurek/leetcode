class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0, max_altitude = 0;
        for (const auto &num : gain) {
            altitude += num;
            max_altitude = max(max_altitude, altitude);
        }
        
        return max_altitude;
    }
};
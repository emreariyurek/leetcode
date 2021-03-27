class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char key = keysPressed[0];
        int maxDuration = releaseTimes[0];
        for (auto i = 1; i < releaseTimes.size(); i++) {
            int duration = releaseTimes[i] - releaseTimes[i - 1];
            if (duration > maxDuration) {
                maxDuration = duration;
                key = keysPressed[i];
            } else if (duration == maxDuration && keysPressed[i] > key) {
                key = keysPressed[i];    
            }
        }
        
        return key;
    }
};
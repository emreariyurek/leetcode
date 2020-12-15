class Solution {
public:
    int countLargestGroup(int n) {
        map<int, int> mymap;
        int max = 0;
        for (int i = 1; i <= n; i++) {
            int sum = 0;
            int tmp = i;
            while (tmp) {
                sum += tmp % 10;
                tmp /= 10;
            }
            mymap[sum]++;
            if (max < mymap[sum])
                max = mymap[sum];
        }
        
        int count = 0;
        for (const auto &[k, v] : mymap) {
            if (v == max)
                count++;
        }
        
        return count;
    }
};
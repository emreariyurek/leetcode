class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        return count_if(items.begin(), items.end(), [=](auto item){
            if (ruleKey == "type")
                return item[0] == ruleValue;
            else if (ruleKey == "color")
                return item[1] == ruleValue;
            else
                return item[2] == ruleValue;
        });
    }
};
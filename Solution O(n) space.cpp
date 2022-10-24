
class Solution {
    
public:
    vector<int> findErrorNums(const vector<int>& input) const {
        unordered_set<int> unique;
        int expectedSum = input.size() * (1 + input.size()) / 2;
        int actualSum = 0;
        int duplicate = 0;
        for (const auto& n : input) {
            //C++20: !unique.contains(n), done the old way for compatibility.
            if (unique.find(n) != unique.end()) {
                duplicate = n;
            }
            unique.insert(n);
            actualSum += n;
        }
        return vector<int>{duplicate, duplicate + expectedSum - actualSum};
    }
};

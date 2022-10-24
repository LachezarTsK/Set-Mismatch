
#include <vector>
using namespace std;

class Solution {
    
    inline static const int NOT_FOUND = -1;

public:
    vector<int> findErrorNums(vector<int>& input) const {
        int duplicate = NOT_FOUND;
        int missing = NOT_FOUND;

        for (int i = 0; i < input.size(); ++i) {
            if (input[abs(input[i]) - 1] < 0) {
                duplicate = abs(input[i]);
                continue;
            }
            input[abs(input[i]) - 1] = -input[abs(input[i]) - 1];
        }

        for (int i = 0; i < input.size() && missing == NOT_FOUND; ++i) {
            if (input[i] > 0) {
                missing = i + 1;
            }
        }
        return vector<int>{duplicate, missing};
    }
};

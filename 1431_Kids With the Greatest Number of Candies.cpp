class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candies = candies[0];
        vector<bool> result;
        for (const int& v: candies)  {
            if (v > max_candies ) max_candies = v;
        }
        for (const int& v: candies) {
            result.push_back(v + extraCandies >= max_candies);
        }
        return result;
    }
};
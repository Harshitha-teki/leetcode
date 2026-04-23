class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int size = candies.size();
        vector<bool> result(size);
        
        int highest = *max_element(candies.begin(), candies.end());

        for (int i = 0; i < size; i++) {
            result[i] = (candies[i] + extraCandies >= highest);
        }

        return result;
    }
};

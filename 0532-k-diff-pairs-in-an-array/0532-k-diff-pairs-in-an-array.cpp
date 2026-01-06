class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int i = 0;
        set<pair<int,int>>s;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int j = 1;
        while (j<n) {
            int diff = abs(nums[i] - nums[j]);

            if (diff == k) {
                s.insert({nums[i],nums[j]});
                i++;        
                j++;        
            }
            else if (diff > k) {
                i++;
                if(i==j)
                    j++;
            }
            else {
                j++;
            }
        }
        return s.size();
    }
};

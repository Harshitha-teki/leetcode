class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int min_val=min_element(nums.begin(), nums.end())-nums.begin();
        int max_val = max_element(nums.begin(),nums.end())-nums.begin();
        int l=min(min_val, max_val);
        int r=max(max_val,min_val);
        
        int front = r+1;
        int back = n-l;
        int both = (l+1)+(n-r);
        return min({front,back, both});
    }
};
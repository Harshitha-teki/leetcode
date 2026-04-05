class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<double>avg;
        int l=0, r=n-1;
        while(l<r){
            avg.push_back((nums[l]+nums[r])/2.0);
            l++;
            r--;
        }
        return *min_element(avg.begin(), avg.end());
    }
};
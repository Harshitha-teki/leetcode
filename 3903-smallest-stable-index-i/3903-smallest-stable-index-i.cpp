class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>v(n);
        v[n-1] = nums[n-1];
        for(int  i=n-2; i>=0; i--){
            v[i] = min(nums[i],v[i+1]);
        }
        int m = 0, index=-1, cur_min=0;
        for(int i=0; i<n; i++){
            m = max(m,nums[i]);
            int t = m - v[i];
            if(t<=k){
                cur_min = t;
                index = i;
                break;
            }
        }
        return  index;
    }
};
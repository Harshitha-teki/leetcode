class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size()-1;
        vector<int>v(2,-1);
        while(l<=h){
            int m = l+(h-l)/2;
            if(target == nums[m]){
                v[0] = m;
                h = m-1;
            }
            else if(nums[m]<target){
                l = m + 1;
            }
            else{
                h = m - 1;
            }
        }
        l=0,h=nums.size()-1;
        while(l<=h){
            int m = l+(h-l)/2;
            if(nums[m]==target){
                v[1] = m;
                l = m+1; 
            }
            else if(nums[m]<target)
                l = m+1;
            else
                h = m-1;
        }
        return v;
        
    }
};
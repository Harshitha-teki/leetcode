class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal-1);
    }
    int atMost(vector<int>&nums, int goal){
        int l=0, sum=0, res=0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            while(sum>goal && l<=i){
                sum -= nums[l];
                l++;
            }
            if(sum<=goal){
                res += i-l+1;
            }
        }   
        return res;
    }
};
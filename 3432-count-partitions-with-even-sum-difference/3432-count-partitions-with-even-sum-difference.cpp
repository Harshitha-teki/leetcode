class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum =0;
        for(int i:nums)
            sum+= i;
        int left=0, c=0;
        for(int i=0; i<nums.size()-1; i++){
            left +=nums[i];
            int right = sum-left;
            if((left%2) == (right%2) ){
                c++;
            }
        }
        return c;
    }
};
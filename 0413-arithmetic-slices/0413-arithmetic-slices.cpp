class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3){
            return 0;
        }
        int total =0;
        int sum=0;
        for(int i=1; i<nums.size()-1; i++){
            if(nums[i]-nums[i-1] == nums[i+1]-nums[i]){
                sum ++;
                total += sum;
            }
            else{
                sum=0;
            }
        }
        return total;
    }
};
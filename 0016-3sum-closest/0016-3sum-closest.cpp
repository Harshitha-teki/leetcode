class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int ans=INT_MAX;
        int final_sum=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    int sum = nums[i]+nums[j]+nums[k];
                    int sol = abs(target-sum);
                    if( sol<ans){
                        ans = sol;
                        final_sum = sum;
                    }
                }
            }
        }
        return final_sum;
    }
};
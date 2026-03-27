class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int l=0, r=0,c=0, sub=0;
        int pre =0;
        int n = nums.size();
        while(r<n){
            if(nums[r]%2 != 0){
                c = c+1;
                pre=0;
            }
            while(c==k){
                pre++;
                if(nums[l]%2 !=0)
                    c--;
                l++;
            }
            sub += pre;
            r++;
        } 
        return sub;
    }
};
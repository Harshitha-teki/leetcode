class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=0,p=0;
        for(int i:nums){
            if(i<0)
                n++;
            if(i>0)
                p++;
        }
        return max(n,p);
    }
};
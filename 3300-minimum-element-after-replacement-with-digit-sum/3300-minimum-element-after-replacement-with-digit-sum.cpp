class Solution {
public:
    int minElement(vector<int>& nums) {
        int m=INT_MAX;
        for(int i:nums){
            int s = 0;
            while(i>0){
                s += i%10;
                i /= 10;
            }
            m = min(s,m);
        }
        return m;
    }
};
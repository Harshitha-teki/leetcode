class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0,ans=0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            int rem=sum%k;
            //for [-3,4] the actual remainder should be '4' but in cpp it assumes that remainder is -1;
            /* -1%5 =-1
                rem += k  ==> 4
             */
            if(rem<0){
                rem += k;
            }
            if(mp.find(rem) != mp.end()){
                ans += mp[rem];
            }
            mp[rem]++;
        }
        return ans;
    }
};
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(l<=r){
            int k = l+(r-l)/2;
            long long s=0;
            for(int i=0; i<n; i++){
                if(piles[i]%k==0){
                    s += piles[i]/k;  
                }
                else{
                    s += (piles[i]/k)+1;
                }
            }
            if(s<=h){
                ans = k;
                r= k-1;
            }
            else if(s>h){
                l=k+1;
            }
        }
        return ans;
    }
};
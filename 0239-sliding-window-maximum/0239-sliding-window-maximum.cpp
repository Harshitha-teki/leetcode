class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>pre(n);
        pre[0]=nums[0];
        vector<int>suf(n);
        suf[n-1]=nums[n-1];
        vector<int>v;
        for(int i=1; i<n; i++){
            if(i%k==0){
                pre[i]=nums[i];
            }
            else{
                pre[i] = max(nums[i], pre[i-1]);
            }

            int j = n-i-1;
            if((j+1)%k==0 || j==n-1){
                suf[j]=nums[j];
            }
            else{
                suf[j] = max(nums[j], suf[j+1]);
            }
        }
        for(int i=k-1; i<n; i++){
            v.push_back(max(pre[i],suf[i-k+1]));
        }
        return v;
    }
};
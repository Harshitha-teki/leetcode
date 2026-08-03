class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
    void mergeSort(vector<int>&nums, int l, int r){
        int left = l;
        int right =r;
        if(left<right){
            int mid = left+(right-left) /2;
            mergeSort(nums,left,mid);
            mergeSort(nums,mid+1,right);
            merge(nums,left,mid,right);
        }
    }
    void merge(vector<int>&nums, int l, int m, int r){
        int i=l;
        int j=m+1;
        vector<int>t;
        while(i<= m && j<=r){
            if(nums[i]<=nums[j]){
                t.push_back(nums[i]);
                i++;
            }
            else{
                t.push_back(nums[j]);
                j++;
            }
        }
        while(j<=r){
            t.push_back(nums[j]);
            j++;
        }
        while(i<=m){
            t.push_back(nums[i]);
            i++;
        }
        for(int k=l;k<=r;k++){
            nums[k]=t[k-l];
        }
    }
};
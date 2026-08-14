class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int s1=nums1.size();
        int s2=nums2.size();
        int tot=s1+s2;
        int ind1=(tot-1)/2;
        int ind2= tot/2;
        int val1,val2;
        int i=0, j=0,ite=0;
        while(i<s1 || j<s2){
            int cur_val=0;
            if(i<s1 && (j>=s2 || nums1[i]<=nums2[j])){
                cur_val=nums1[i];
                i++;
            }
            else{
                cur_val=nums2[j];
                j++;
            }
            if(ite==ind1)
                val1=cur_val;
            if(ite==ind2){
                val2 = cur_val;
                break;
            }
            ite++;
        }
        return (val1+val2)/2.0;
    }
};
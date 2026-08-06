class Solution {
public:
    int smallestNumber(int n, int t) {
        int c=n;
        while(n<=c){
            int tem=c;
            int pro=1;
            while(tem>0){
                pro *= tem%10;
                tem=tem/10;
            }
            if(pro % t==0){
                return c;
            }
            c++;
        }

        return -1;
    }
};
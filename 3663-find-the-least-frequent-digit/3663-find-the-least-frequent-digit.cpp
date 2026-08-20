class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int,int>mp;
        while(n>0){
            int i = n%10;
            mp[i]++;
            n /= 10;
        }
        int num=0;
        int c=INT_MAX;
        for(auto i:mp){
            if(c>i.second){
                c=i.second;
                num = i.first;
            }
        }
        return num;
    }
};
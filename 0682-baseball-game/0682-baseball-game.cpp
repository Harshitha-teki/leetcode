class Solution {
public:
    int calPoints(vector<string>& o) {
        stack<int>s;
        int n = o.size();
        int ans =0;
        for(int i=0; i<n; i++){
            if(o[i]=="+"){
                int sum=0;
                int t=s.top();
                s.pop();
                sum += t+s.top();
                s.push(t);
                s.push(sum);
            }
            else if(o[i]=="C"){
                s.pop();
            }
            else if(o[i]=="D"){
                s.push(s.top()*2);
            }
            else{
                s.push(stoi(o[i]));
            }
        }
        while(!s.empty()){
            ans += s.top();
            s.pop();
        }
        return ans;
    }
};
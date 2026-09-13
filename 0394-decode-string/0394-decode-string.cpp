class Solution {
public:
    string decodeString(string s) {
        stack<string>st;
        stack<int>num;
        int val=0;
        string cur="";
        for(char i:s){
            if(isdigit(i)){
                val =val*10 + (i-'0');
            }
            else if(i=='['){
                st.push(cur);
                num.push(val);
                val=0;
                cur="";
            }
            else if(i==']'){
                string res = st.top();
                st.pop();
                int n = num.top();
                num.pop();

                string temp="";
                for(int j=0; j<n; j++){
                    temp += cur;
                }
                cur = res + temp;
            }
            else{
                cur += i;
            }
        }
        return cur;
    }
};
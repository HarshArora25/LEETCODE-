class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string res="";
        int count1=0,count2=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            count1++;
            else if(s[i]==')'){
                if(count1==count2)
                continue;
                count2++;
            }
            res+=s[i];
        }
        int open=0,close=0;
        string ans="";
        for(int i=res.size()-1;i>=0;i--){
            if(res[i]=='('){
                if(open==close)
                continue;
                open++;
            }
            else if(res[i]==')') close++;
            ans+=res[i];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
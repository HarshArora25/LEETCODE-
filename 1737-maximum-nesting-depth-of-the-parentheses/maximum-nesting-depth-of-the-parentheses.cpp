class Solution {
public:
    int maxDepth(string s) {
        int balance=0,maxi=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                balance++;
            else if(s[i]==')')
            balance--;
            maxi=max(maxi,balance);
        }
        return maxi;
    }
};
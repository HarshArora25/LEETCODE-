class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int vow=0;
        int cons=0;
        int count=0;

         for(int i=0;i<s.size();i++){
            vow=0,cons=0;
            for(int j=i;j<s.size();j++){
                 char ch=tolower(s[j]);
                  if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                 vow++;
                }
                  else{
                  cons++;
                   }
                if(vow==cons && (vow*cons)%k==0 )
                count++;
            }
         }
         return count;
    }
};
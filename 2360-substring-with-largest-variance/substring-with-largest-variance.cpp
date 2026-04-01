class Solution {
public:
    int largestVariance(string s) {
       vector<int>count(26,0);
       for(char& c:s){
        count[c-'a']=1;
       }
       int maxi=0;
       bool visit=false;
       for(char ch='a';ch<='z';ch++){
        for(char chh='a';chh<='z';chh++){
          if(count[ch-'a']==0 || count[chh-'a']==0) continue;

          int firstcount=0;
          int secondcount=0;
          for(char& c:s){
             if(c==ch)
             firstcount++;
             if(c==chh)
             secondcount++;
             if(secondcount>0){
                maxi=max(maxi,firstcount-secondcount);
             }
             else{
                if(visit==true)
                maxi=max(maxi,firstcount-1);
             }
             if(secondcount>firstcount){
                secondcount=0;
                firstcount=0;
                visit=true;
             }
          }
        }
       }
       return maxi;
    }  
};
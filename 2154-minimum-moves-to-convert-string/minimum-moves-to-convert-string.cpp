class Solution {
public:
    int minimumMoves(string s) {
        int i=0;
        int n=s.size();
        int count=0;
        while(i<n){
            if(s[i]=='O')
            i++;
            else if(s[i]=='X'){
                count+=1;
                i+=3;
            }
        }
      return count;
    }
};
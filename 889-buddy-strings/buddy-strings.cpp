class Solution {
private:
    bool checkfreq(string& s){
        vector<int>freq(26,0);
        for(auto& it:s){
            freq[it-'a']++;
            if(freq[it-'a']>=2) return true;
         }
         return false;
    }
public:
    bool buddyStrings(string s, string goal) {
     int n=s.size();
     int m=goal.size();
     int pos1=-1;
     int pos2=-1;
     int count=0;
     if(n !=m ) return false;
     if(s==goal)
     return checkfreq(s);
     for(int i=0;i<n;i++){
        if(s[i] != goal[i]){
            count++;
         if( pos1 ==-1 ){
            pos1=i;
        }
         else if(pos2 ==-1 )
            pos2=i;
         else
         return false;
        }
     }  
     if(count !=2) return false;
     swap(s[pos1],s[pos2]);
     return s==goal; 
    }
};
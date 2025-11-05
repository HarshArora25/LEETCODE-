class Solution {
    private:
    bool checkfreq(string s,string goal){
        vector<int>arr(26,0);
        for(char& ch:s){
            arr[ch-'a']++;
            if(arr[ch-'a']>=2)
            return true;
        }
        return false;
    }
public:
    bool buddyStrings(string s, string goal) {
      if(s.size() != goal.size()) return false;
      if(s==goal){
        return checkfreq(s,goal);
      }  
      vector<int>ind;
      for(int i=0;i<s.size();i++){
        if(s[i] != goal[i])
        ind.push_back(i);
      }
      if(ind.size()!=2) return false;
      else{
        swap(s[ind[0]],s[ind[1]]);
      } 
      return s==goal;
    }
};
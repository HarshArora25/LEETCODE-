class Solution {
public:
    string minWindow(string s, string t) {
     int n=s.size();
     int m=t.size();
     int i=0;
     int length=0,start=-1,count=0;
     int mini=1e9;
     if(m>n) return "";
     unordered_map<char,int>mpp1;
     unordered_map<char,int>mpp2;
     for(auto& it:t){
        mpp2[it]++;
     }
    for(int j=0;j<n;j++){
        mpp1[s[j]]++;
        if(mpp2.find(s[j]) !=mpp2.end() && mpp1[s[j]] <= mpp2[s[j]]){
            count++;
        }
        while(count==t.size()){
         length=j-i+1;
         if(length<mini){
            mini=length;
            start=i;
         }  
          mpp1[s[i]]--;
          if(mpp2.find(s[i]) != mpp2.end() && mpp1[s[i]]<mpp2[s[i]])
          count--;
          if(mpp1[s[i]]==0)
          mpp1.erase(s[i]);
          i++; 
        }

    }
      if(start==-1) return "";
     return s.substr(start,mini);
    }
};
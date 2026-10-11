class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
    int n=s.size();
    int m=p.size();
    if (m > n) return {};
    vector<int>vec1(256,0),vec2(256,0);
    for(int i=0;i<m;i++){
        vec2[p[i]-'a']++;
        vec1[s[i]-'a']++;
    }   
    vector<int>result;

    if(vec1==vec2){
    result.push_back(0); 
    }


    for(int j=m;j<n;j++){
      vec1[s[j]-'a']++;
      vec1[s[j-m]-'a']--;
      if(vec1==vec2)
      result.push_back(j-m+1);
    }
    return result;
    }
};
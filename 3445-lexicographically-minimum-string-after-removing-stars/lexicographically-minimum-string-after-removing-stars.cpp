class Solution {
private:
struct comp{
  bool operator()(pair<char,int>p1,pair<char,int>p2){
    if(p1.first != p2.first)
    return p1.first>p2.first;
    return p2.second>p1.second;
  }
};
public:
    string clearStars(string s) {
     priority_queue<pair<char,int>,vector<pair<char,int>>,comp>pq;
     int n=s.size();
     for(int i=0;i<n;i++){
        if(s[i]=='*'){
          if(!pq.empty()){
            int elem=pq.top().first;
            int idx=pq.top().second;
            s[idx]='*';
            pq.pop();
          }
        }
        else
        pq.push({s[i],i});
     }   
     string nww="";
     for(auto& it:s){
        if(it !='*')
        nww+=it;
     }
     return nww;
    }
};
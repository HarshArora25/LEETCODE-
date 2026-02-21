class Solution {
public:
    bool judgeCircle(string moves) {
    // int x=0;
    // for(int i=0;i<moves.size();i++){
    //   if(moves[i]=='L' || moves[i]=='D')
    //    x=x-1;
    //    else
    //    x=x+1;
    // }
    // if(x==0) return true;
    // return false;
    pair<int,int>pos{0,0};
     for(int i=0;i<moves.size();i++){
        if(moves[i]=='U') pos.first++;
        else if(moves[i]=='D') pos.first--;
        else if(moves[i]=='R') pos.second++;
        else pos.second--;
     }
     return pos.first==0 && pos.second==0;
    }
};
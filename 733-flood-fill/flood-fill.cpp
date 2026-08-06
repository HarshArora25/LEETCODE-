class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color) return image;
      int n=image.size();
      int m=image[0].size();
      int nr[]={-1,0,1,0};
      int nc[]={0,1,0,-1};
      int old=image[sr][sc];
      queue<pair<int,int>>qu;
      qu.push({sr,sc});
      image[sr][sc]=color;
      while(!qu.empty()){
         int x=qu.front().first;
         int y=qu.front().second;
        qu.pop();
      for(int i=0;i<4;i++){
        int newr=nr[i]+x;
        int newc=nc[i]+y;
        if(newr>=0 && newr<n && newc>=0 && newc<m && image[newr][newc]==old){
        image[newr][newc]=color;
        qu.push({newr,newc});
        }
      }
    }
    return image;
    }
};
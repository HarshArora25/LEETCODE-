class Solution {
private:
  void dfs(vector<vector<int>>& image,int sr,int sc,int oldcolor,int newcolor,int n,int m){
    image[sr][sc]=newcolor;
    int nr[]={-1,0,1,0};
    int nc[]={0,-1,0,1};
    for(int i=0;i<4;i++){
        int nowr=sr + nr[i];
        int nowc=sc + nc[i];
        if(nowr>=0 &&nowr<n && nowc>=0 && nowc<m && image[nowr][nowc]==oldcolor){
            image[nowr][nowc]=newcolor;
        dfs(image,nowr,nowc,oldcolor,newcolor,n,m);
        }
    }
  }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
      int n=image.size();
      int m=image[0].size();
      int oldcolor=image[sr][sc];
      if(oldcolor==color) return image;
      dfs(image,sr,sc,oldcolor,color,n,m);
      return image;
    }
};
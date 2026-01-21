class Solution {
public:
    void dfskr(vector<vector<int>>& image, int sr, int sc, int color,int orignal){
        if(sr<0 || sr>=image.size() || sc<0 || sc>image[0].size() || image[sr][sc] !=orignal ) return ;
        image[sr][sc]=color;
        dfskr(image,sr-1,sc,color,orignal);
        dfskr(image,sr+1,sc,color,orignal);
        dfskr(image,sr,sc+1,color,orignal);
        dfskr(image,sr,sc-1,color,orignal);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int orignal=image[sr][sc];
        if(color==orignal) return image;
        dfskr(image,sr,sc,color,orignal);
        return image;
    }
};
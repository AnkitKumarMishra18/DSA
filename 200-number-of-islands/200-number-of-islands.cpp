class Solution {
private:
    void count_islands(vector<vector<char>>& grid,int x,int y,int rows,int cols){
        if(x<0||x>=rows||y<0||y>=cols||grid[x][y]!='1')
            return;
        grid[x][y]='2';
        count_islands(grid,x-1,y,rows,cols);
        count_islands(grid,x+1,y,rows,cols);
        count_islands(grid,x,y-1,rows,cols);
        count_islands(grid,x,y+1,rows,cols);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        if(rows==0)
            return 0;
        int no_of_islands=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]=='1'){
                    count_islands(grid,i,j,rows,cols);
                    no_of_islands+=1;
                }
            }
            
        }
        return no_of_islands;
    }
};
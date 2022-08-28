class Solution {
public:
    void diagonal_sort(vector<vector<int>>& mat,int row,int col,int n,int m){
        vector<int> v(101,0);
         int r = row ,c = col;
        while(r<n && c<m){
            v[mat[r][c]]++;
            r++;
            c++;
        }
        r = row;
         c = col;
        for(int i=1;i<101;i++){
            if(v[i]){
                int count = v[i];
                while(count--){
                    mat[r][c] = i;
                    r++;
                    c++;
                }
            }
        }
         
        
        
        
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        for(int col=0;col<m;col++){
            diagonal_sort(mat,0,col,n,m);
        }
        for(int row = 1;row<n;row++){
           diagonal_sort(mat,row,0,n,m);
        }
        return mat;
    }
};
class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>xs(m,vector<int>(n,0));
        vector<vector<int>>ys(m,vector<int>(n,0));
        int a=0;
        int b=0;
        for(int i=0; i<n; i++){
            if(grid[0][i]=='X'){
                a++;
            }
            if(grid[0][i]=='Y'){
                b++;
            }
            xs[0][i]=a;
            ys[0][i]=b;
        }
        a=0;
        b=0;
        for(int i=0; i<m; i++){
            if(grid[i][0]=='X'){
                a++;
            }
            if(grid[i][0]=='Y'){
                b++;
            }
            xs[i][0]=a;
            ys[i][0]=b;
        }
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(grid[i][j]=='X'){
                    xs[i][j]=xs[i-1][j]+xs[i][j-1]-xs[i-1][j-1]+1;
                }else{
                    xs[i][j]=xs[i-1][j]+xs[i][j-1]-xs[i-1][j-1];
                }
            }
        }
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(grid[i][j]=='Y'){
                    ys[i][j]=ys[i-1][j]+ys[i][j-1]-ys[i-1][j-1]+1;
                }else{
                    ys[i][j]=ys[i-1][j]+ys[i][j-1]-ys[i-1][j-1];
                }
            }
        }

        int count=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(xs[i][j]==ys[i][j] && xs[i][j]!=0){
                    count++;
                }
            }
        }
        return count;
    }
};
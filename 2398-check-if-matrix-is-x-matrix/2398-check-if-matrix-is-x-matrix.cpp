class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        bool found = true;
        int size = grid.size()-1;
        // int k = 0;

        for(int i=0;i<=size;i++){
            for(int j=0;j<=size;j++){
                if(i==j){
                    if(grid[i][j]==0 || grid[i][size-i]==0) found = false;
                }
                else{
                    if(j!=size-i && grid[i][j]!=0) {found = false;
                    cout<<i<<" "<<j<<endl;}
                }
            }
        }

        return found;
    }
};
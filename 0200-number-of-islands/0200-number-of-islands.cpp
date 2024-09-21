class Solution {
public:
int count  = 0;
    int numIslands(vector<vector<char>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='1'){
                    count++;
                    grid[i][j]='0';
                    queue<pair<int,int>> q;
                    q.push(make_pair(i,j));

                    vector<vector<int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

                    while(!q.empty()){
                        int row = q.front().first;
                        int col = q.front().second;

                        for(auto dir: directions){
                            int newRow = row + dir[0];
                            int newCol = col + dir[1];

                            if(newRow>=0 && newRow<grid.size() && newCol>=0 && newCol<grid[0].size() && grid[newRow][newCol] == '1'){
                                q.push({newRow,newCol});
                                grid[newRow][newCol]='0';
                            }
                        }
                        q.pop();
                    }
                }
            }
        }

        return count;
    }
};
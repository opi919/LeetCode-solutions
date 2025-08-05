class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int result = logs[0][0];
        int max = logs[0][1];

        for(int i=1;i<logs.size();i++){
            int diff = logs[i][1] - logs[i-1][1];
            if(diff>max){
                max = diff;
                result = logs[i][0];
            }
            else if(diff == max && logs[i][0] < result){
                max = diff;
                result = logs[i][0];
            }
        }

        return result;
    }
};
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> vc;
        vc.push_back(0);
        int max = 0;

        for(int i=0;i<gain.size();i++){
            vc.push_back(vc[i] + gain[i]);
            if(vc[i+1]>max) max = vc[i+1];
        }

        return max;
    }
};
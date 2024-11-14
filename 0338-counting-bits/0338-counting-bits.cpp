class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        ans[0] =0;
        if(n<1) return ans;
        ans[1]=1;

        int index = 0;
        for(int i=2;i<=n;i++){
            if(i%2==0){
                ++index;
                ans[i] = ans[index];
            }else {
                ans[i] = ans[index] + 1;
            }

        }

        return ans;
    }
};
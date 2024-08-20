class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = 0;
        vector<bool> ans(candies.size());
        for(int i=0;i<candies.size();i++){
            if(candies[i]>max) max = candies[i];
            ans[i]=false;
        }

        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies >= max) ans[i]=true;
        }
return ans;
    }
};
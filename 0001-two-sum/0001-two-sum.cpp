class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int>result;

        for(int i=0;i<nums.size();i++){
            int diff = target - nums[i];

            if(mp[diff] > 0) {result.push_back(mp[diff] - 1);result.push_back(i);break;}
            else mp[nums[i]] = i+1;
        }

        return result;
    }
};
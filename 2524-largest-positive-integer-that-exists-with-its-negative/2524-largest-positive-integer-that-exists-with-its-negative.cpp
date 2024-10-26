class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int largest = -1;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp[-nums[i]] == 1 && abs(nums[i])>largest) largest = abs(nums[i]);
            else{
                mp[nums[i]] = 1;
            }
        }

        return largest;
    }
};
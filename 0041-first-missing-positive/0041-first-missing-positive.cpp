class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int largest = 0;
        map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(nums[i]>largest) largest = nums[i];
        }
        if(largest == 0) return 1;

        for(int i=1;i<largest;i++){
            if(mp[i]==0) return i;
        }
        return largest + 1;
    }
};
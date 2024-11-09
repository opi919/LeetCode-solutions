class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> vc;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) vc.push_back(nums[i]);
        }

        for(int i=0;i<nums.size();i++){
            if(i>=vc.size()) nums[i] = 0;
            else nums[i] = vc[i];
        }
    }
};
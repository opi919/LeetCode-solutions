class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            int index = nums[i] - 1;
            ans[index] = index + 1;
        }

        nums.clear();

        for(int i=0;i<ans.size();i++){
            if(ans[i] == 0){
                nums.push_back(i+1);
            }
        }


        return nums;
    }
};
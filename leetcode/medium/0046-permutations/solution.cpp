class Solution {
public:

    void getPermutations(vector<int>& nums, int index,
                         vector<vector<int>>& ans) {

        // Base case
        if (index == nums.size()) {
            ans.push_back(nums);
            return;
        }

        // Try every element from index onwards
        for (int i = index; i < nums.size(); i++) {

            // Choose
            swap(nums[index], nums[i]);

            // Explore
            getPermutations(nums, index + 1, ans);

            // Undo choice
            swap(nums[index], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;

        getPermutations(nums, 0, ans);

        return ans;
    }
};

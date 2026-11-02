class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int mini = INT_MAX;


        for(int n : nums) {
            mini = min(mini, n);
        }

        int moves = 0;

        for(int n : nums) {
            moves += n - mini;
        }

        return moves;
    }
};
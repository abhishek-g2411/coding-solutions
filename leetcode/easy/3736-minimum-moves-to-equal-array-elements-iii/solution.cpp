class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = INT_MIN;
        
        for(int n : nums) {
            maxi = max(maxi, n);
        }

        int moves = 0;
        for(int n : nums) {
            moves += maxi - n;
        }

        return moves;
    }
};
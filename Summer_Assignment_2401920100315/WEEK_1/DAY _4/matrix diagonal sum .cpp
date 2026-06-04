class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int num = mat.size();
        int sum = 0;

        for (int i = 0; i < num; i++) {
            sum += mat[i][i];            // primary diagonal
            sum += mat[i][num - 1 - i];    // secondary diagonal
        }

        // If num is odd, subtract the center element once
        if (num % 2 == 1) {
            sum -= mat[num / 2][num / 2];
        }

        return sum;
    }
};


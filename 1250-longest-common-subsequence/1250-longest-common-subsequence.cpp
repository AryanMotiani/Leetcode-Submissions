class Solution {
    vector<vector<int>> dp;
    string text1, text2;

public:
    int solve(int i, int j) {
        if (i == text1.size() || j == text2.size()) return 0;
        if (dp[i][j] != -1) return dp[i][j];
        if (text1[i] == text2[j])
            return dp[i][j] = 1 + solve(i + 1, j + 1);
        return dp[i][j] = max(solve(i + 1, j), solve(i, j + 1));
    }

    int longestCommonSubsequence(string t1, string t2) {
        text1 = t1;
        text2 = t2;
        dp.assign(1001, vector<int>(1001, -1));
        return solve(0, 0);
    }
};

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int top    = 0, 
    bottom = m - 1,    // rows go 0…m-1
    left   = 0, 
    right  = n - 1;    // cols go 0…n-1
vector<int> ans;
ans.reserve(m * n);

while (top <= bottom && left <= right) {
    // 1) left → right across the top row
    for (int j = left; j <= right; ++j)
        ans.push_back(matrix[top][j]);
    ++top;

    // 2) top → bottom down the right column
    for (int i = top; i <= bottom; ++i)
        ans.push_back(matrix[i][right]);
    --right;

    // 3) right → left across the bottom row (if still valid)
    if (top <= bottom) {
        for (int j = right; j >= left; --j)
            ans.push_back(matrix[bottom][j]);
        --bottom;
    }

    // 4) bottom → top up the left column (if still valid)
    if (left <= right) {
        for (int i = bottom; i >= top; --i)
            ans.push_back(matrix[i][left]);
        ++left;
    }
}

return ans;
    }
};
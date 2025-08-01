class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if (n == 0) return;
        k %= n; 
        k=n-k;
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.end());
    }
};
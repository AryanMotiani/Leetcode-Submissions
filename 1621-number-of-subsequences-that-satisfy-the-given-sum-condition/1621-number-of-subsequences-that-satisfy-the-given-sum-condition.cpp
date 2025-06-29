class Solution {
private:
    static constexpr int MOD = 1'000'000'007;
    vector<int> pow2;

    // Build pow2[i] = (2^i) % MOD for i = 0..n
    void initPowers(int n) {
        pow2.resize(n+1);
        pow2[0] = 1;
        for (int i = 1; i <= n; i++) {
            // each step just doubles, then takes the mod
            pow2[i] = (pow2[i-1] * 2LL) % MOD;
        }
    }

public:
    int numSubseq(vector<int>& nums, int target) {
        int n = nums.size();
        initPowers(n);                // ← precompute all 2^0 ... 2^n % MOD
        sort(nums.begin(), nums.end());

        long long cnt = 0;
        int l = 0, r = n - 1;
        while (l <= r) {
            if (nums[l] + nums[r] <= target) {
                // there are exactly 2^(r-l) subsequences that include nums[l]
                cnt = (cnt + pow2[r - l]) % MOD;
                l++;
            } else {
                r--;
            }
        }
        return (int)cnt;
    }
};

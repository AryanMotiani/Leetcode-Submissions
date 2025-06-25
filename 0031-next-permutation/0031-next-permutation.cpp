class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),i=0,ok=0;
        for (int k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1]) {
                i=k;
                ok=1;
                break;
            }
        }
        for(int j=n-1;j>i;j--){
            if(nums[j]>nums[i]){
                swap(nums[j],nums[i]);
                break;
            }
        }
        if(!ok) i=-1; // reverse entire array
        reverse(nums.begin()+i+1,nums.end());
    }
};
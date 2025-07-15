class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),len=0;
        vector<int> a;
        for(int i=0;i<n;i++){
            if(nums[i]==0) len++;
            else{
                a.push_back(nums[i]);
            }
        }
        
        for(int i=0;i<a.size();i++) nums[i]=a[i];
        for(int i=a.size();i<n;i++) nums[i]=0;
        
    }
};
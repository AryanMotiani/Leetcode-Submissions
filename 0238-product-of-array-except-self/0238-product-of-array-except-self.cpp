class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(),zerocnt=0,prod=1;
        vector <int> a;
        for(int i=0;i<n;i++){
            if(nums[i]==0) {
                zerocnt++;
            }
            else prod*=nums[i];
        }
        int num=0;
        if(zerocnt==0) num=prod;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                if(zerocnt==1) a.push_back(prod);
                else a.push_back(0);
            }
            else a.push_back(num/nums[i]);
        }
        return a;
    }
};
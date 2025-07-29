class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size(),left=0,right=0,ans=0;
        unordered_map<int,int> mp;
        for(;right<n;right++){
            mp[fruits[right]]++;
            if(mp.size()>2){
                while(left<right && mp.size()>2){
                    mp[fruits[left]]--;
                    if(mp[fruits[left]]==0) mp.erase(fruits[left]); 
                    left++; 
                }
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};
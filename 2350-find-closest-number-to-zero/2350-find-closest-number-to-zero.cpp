class Solution {
public:
    int findClosestNumber(vector<int>& a) {
        int ans=a[0],val=abs(a[0]);
        for(int i=0;i<a.size();i++) {
            if(abs(a[i])<val){
                val=abs(a[i]);
                ans=a[i];
            }
            else if(abs(a[i])==val){
                ans=max(ans,a[i]);
            }
        }
        return ans;
    }
};
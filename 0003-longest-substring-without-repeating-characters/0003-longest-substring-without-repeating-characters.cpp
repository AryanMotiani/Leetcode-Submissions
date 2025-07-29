class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),ans=0,tmp=0;
        unordered_map <char,int> c;
        for(int i=0;i<n;i++){
            if(c.find(s[i])!=c.end()){
                ans=max(ans,i-max(c[s[i]],tmp));
                tmp=max(c[s[i]]+1,tmp);
            }
            c[s[i]]=i;
            ans=max(ans,i+1-tmp);
        }
        ans=max(ans,n-tmp);
        return ans;
    }
};
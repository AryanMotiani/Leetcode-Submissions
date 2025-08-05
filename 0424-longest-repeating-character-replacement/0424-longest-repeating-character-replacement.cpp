class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size(),ans=0;
        unordered_set<char> st;
        for(int i=0;i<n;i++) st.insert(s[i]);
        for (auto x:st){
        int l=0,cnt=0,ans1=0,r=0;
        for(;r<n;r++){
           if(s[r]!=x && cnt<k){
            cnt++;
           }
           else if(s[r]!=x && cnt==k){
            while(l<=r && s[l]==x){
                l++;
            }
            l++;
           }
           ans1=max(ans1,r-l+1);
        }
        ans=max(ans,ans1);
        }
        return ans;
    }  
};
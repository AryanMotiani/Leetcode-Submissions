class Solution {
public:
    int possibleStringCount(string word) {
        int ans=0,len=0;
        int n=word.size();
        for (int i=1;i<n;i++){
            if(word[i]==word[i-1]) len++;
            else {
                ans+=len;
                len=0;
            }
        }
        ans+=len;
        
        return ans+1; // +1 for the original word without any change 
    }
};
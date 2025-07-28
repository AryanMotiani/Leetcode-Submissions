class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size(),ok=0,cnt=0;
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++){
            if(s[i]!=' ') {
                ok=1;
                cnt++;
            }
            else if(ok==1) break;
        }
        return cnt;
    }
};
class Solution {
public:
    string longestPalindrome(string s) {
       int n=s.size(),len=1,strt=0,end=0;
        for(int i=0;i<n;i++){
            int j=n-1;
            while(j>=i){
                if(s[i]!=s[j]) j--;
                else{
                    int tst=i,tend=j,ok=1;
                    while(ok && tst<=tend) {
                        tst++;
                        tend--;
                        if(tst<=n-1 && tend>=0) {
                            if(s[tst]!=s[tend]) {
                                ok=0;
                                break;
                            } 
                        }
                    }
                    if(ok){
                        len=max(j-i+1,len);
                        if(len==j-i+1){
                        strt=i;
                        end=j;
                        break;
                        }
                    }
                    j--;
                }
            }
        }
        
            string ans;
            for(int i=strt;i<end+1;i++){
                ans+=s[i];
            }
            return ans;
    }
};
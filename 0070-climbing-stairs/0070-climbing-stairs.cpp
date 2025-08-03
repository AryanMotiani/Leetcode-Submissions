class Solution {
public:
    int climbStairs(int n) {
        int twos=n/2,ans=0;
        while(twos>=0){
            int ones=n-(2*twos);
            int mn=min(ones,twos);
            long long tmp=1;
            int total=ones+twos;
            for(int i=1;i<=mn;i++){
                tmp*=(total-i+1);
                tmp/=i;
            }
            ans+=tmp;
            twos--;
        }
        return ans;
    }
};
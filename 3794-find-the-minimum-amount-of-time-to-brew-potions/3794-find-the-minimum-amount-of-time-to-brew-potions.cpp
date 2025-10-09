class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        long long n=mana.size(),m=skill.size();
        long long ans=0;
        vector<long long> temp(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                long long num=max(ans,temp[j]);
                ans=(skill[j]*mana[i])+num;
                temp[j]=ans;
            }
            for(int j=m-2;j>=0;j--) temp[j]=temp[j+1]-(skill[j+1]*mana[i]);
           ans=temp[0];
        }
        return temp[m-1];
    }
};
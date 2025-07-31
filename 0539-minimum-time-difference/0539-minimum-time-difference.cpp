class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n=timePoints.size();
        vector<int> time(n);
        for(int i=0;i<n;i++){
            int tmp=0;
            for(int j=0;j<2;j++){
                int t=timePoints[i][j]-'0';
                tmp=tmp*10+(t);
            }
            tmp*=60;
            int tmp2=0;
            for(int j=3;j<5;j++){
                int t=timePoints[i][j]-'0';
                tmp2=tmp2*10+(t);
            }
            time[i]=tmp+tmp2;
        }
        sort(time.begin(),time.end());
        int mn=1440;
        for(int i=1;i<time.size();i++){
            mn=min(time[i]-time[i-1],mn);
        }
        mn=min(mn,1440-time[time.size()-1]+time[0]);
        return mn;
    }
};
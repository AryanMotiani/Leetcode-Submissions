class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        vector <int> pref(n),a(n);
        for(int i=0;i<n;i++){
            a[i]=gas[i]-cost[i];
            if(i>0) pref[i]=pref[i-1]+a[i];
            else pref[i]=a[i]; //i=0
        }
        if(pref[n-1]<0) return -1;
        int sum=0,best=0,ind=0;
        for(int i=0;i<n;i++){
            if(sum<0 && a[i]>sum){
                ind=i;
                sum=a[i];
            }
            else{
                sum+=a[i];
                best=max(best,sum);
                // if(best==sum) ind=i; wrong because we need the index where the sum starts
            }
        }
        return ind;
    }
};
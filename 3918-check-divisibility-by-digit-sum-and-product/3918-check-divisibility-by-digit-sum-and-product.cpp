class Solution {
public:
    bool checkDivisibility(int n) {
        vector<int> v;
        int num=n;
        while(n>0){
            v.push_back(n%10);
            n/=10;
        }
        int len=v.size();
        int sum=0,prod=1;
        for(int i=0;i<len;i++){
            prod*=v[i];
            sum+=v[i];
        }
        if(num%(prod+sum)==0) return true;
        else return false;
    }
};
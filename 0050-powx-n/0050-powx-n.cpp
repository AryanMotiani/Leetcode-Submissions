class Solution {
public:
    double myPow(double x, int n) {
        long long num=n;
        if(x==1) return 1;
        if(num==0) return 1;
        if(num<0){
            x=1/x;
            num*=-1;
        }
        if(num%2==0) return myPow(x*x,num/2);
        else return x*myPow(x*x,num/2);
    }
};
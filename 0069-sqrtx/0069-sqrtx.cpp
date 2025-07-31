class Solution {
public:
    int mySqrt(int x) {
        long long r=(1LL<<31) - 1;
        long long l=0;
        while(l<=r){
            long long mid=(l+r)/2;
            if(mid*mid<=x && x<(mid+1)*(mid+1)) return mid;
            else if(mid*mid<x) l=mid+1;
            else r=mid-1;
        }
        return 0;
    }
};
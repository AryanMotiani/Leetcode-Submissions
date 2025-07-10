class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0) return 0;
        for(int i=0;i<32;i++){
            if(n%3==0) n/=3;
            else if(n==1) return 1;
            else return 0;
        }
        return 1;
    }
};
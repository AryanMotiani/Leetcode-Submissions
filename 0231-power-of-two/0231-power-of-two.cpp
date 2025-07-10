class Solution {
public:
    bool isPowerOfTwo(int n) {
      
        if(n==0) return 0;
        for(int i=0;i<32;i++){
            if(n%2==0 ) n/=2;
            else if(n==1) return 1;
            else return 0;
        }
        return 1;
    }
};
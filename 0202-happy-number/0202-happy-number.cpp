class Solution {
public:
    bool isHappy(int n) {
        long long a=n,b=0;
        set<int> st;
        while(a!=1)
        {   
            long long tmp=a;
            while(tmp>0){
                b+=pow(tmp%10,2);
                tmp/=10;
                if(b>LLONG_MAX/10) return false; // no need can remove this line
            }
            if(st.find(b)!=st.end()) return false;
            st.insert(b);
            a=b;
            b=0;
        }
        return true;
    }
};
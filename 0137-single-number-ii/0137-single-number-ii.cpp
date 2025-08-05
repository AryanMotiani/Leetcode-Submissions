class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //read tut
        // make groups of 3 for each bit position and if an extra bit is left ie sum%3==1 then that 
        // individual bit  belongs to single number. if sm%3==0 then that bit of the single number is 0;
        int ans=0;
        for(int i=0;i<32;i++){
            int sm=0;
            for(auto &x:nums){
                sm+=x&1;
                x>>=1;
            }
            ans+= (sm%3)* 1<<i;
        }
        return ans;
        
    }
};
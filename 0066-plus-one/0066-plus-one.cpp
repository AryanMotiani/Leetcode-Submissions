class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size(),carry=0;
        
        for(int i=n-1;i>=0;i--){
            if(i==n-1) digits[i]+=1;
            int x=(digits[i]+carry)%10;
            carry=(digits[i]+carry)/10;
            digits[i]=x;
        }
        if(carry==1){
            vector<int> a={1};
            a.insert(a.end(),digits.begin(),digits.end());
            return a;
        }
        return digits;
    }
};
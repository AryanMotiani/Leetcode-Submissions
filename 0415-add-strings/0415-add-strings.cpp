class Solution {
public:
    string addStrings(string num1, string num2) {
        int n=num1.size(),m=num2.size();
        vector <char> vec;
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        if(n>m){
            for(int i=m;i<n;i++) num2+='0';
        }
        else{
            for(int i=n;i<m;i++) num1+='0';
        }
        int carry=0;
        for(int i=0;i<max(m,n);i++){
            int a=num1[i]-'0',b=num2[i]-'0';
            int tmp=a+b+carry;
            if(tmp>9) {
                carry=1;
                tmp-=10;
            }
            else carry=0;
            char c=tmp+'0';
            vec.push_back(c);
        }
        if(carry==1) vec.push_back('1');

        string ans(vec.rbegin(),vec.rend());
        return ans;
    }
};
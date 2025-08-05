class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size(),idx=-1;
        for(int i=0;i<n;i++){
            int x=num[i]-'0';
            if(x%2==1){
                idx=i;
            }
        }
        if(idx==-1) return "";
        string ans="";
        for(int i=0;i<=idx;i++){
            ans+=num[i];
        }
        return ans;
    }
};
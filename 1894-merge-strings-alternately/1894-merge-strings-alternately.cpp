class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        int n=s1.size(),m=s2.size(),i=0;
        string s="";
        for(;i<min(m,n);i++){
            s+=s1[i];
            s+=s2[i];
        }
        for(;i<max(m,n);i++){
            if(i<n) s+=s1[i];
            else s+=s2[i];
        }
        return s;
    }
};
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size(),m=needle.size();

        for(int i=0;i<n;i++){
            if(needle==haystack.substr(i,m)) return i;
        }
        return -1;

    }
};
class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();    
        vector<char> ch;
        for(int i=0;i<n;i++){
            if(isalnum(s[i])) ch.push_back(s[i]);
        }
        int m=ch.size();
        for(int i=0;i<m/2;i++){
            ch[i] = tolower(ch[i]);
            ch[m-i-1]=tolower(ch[m-i-1]);
            if(ch[m-i-1]!=ch[i]) return 0;
        }
        return 1;
    }
};
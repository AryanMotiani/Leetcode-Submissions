class Solution {
public:
    bool isValid(string word) {
        int n=word.size(),cntv=0,cntc=0,cnt;
        if(n<=2) return false;
        for(int i=0;i<n;i++){
        if(!isalnum(word[i])) return false;
        word[i]=tolower(word[i]);
        if(word[i]=='a'|| word[i]=='o'|| word[i]=='e'|| word[i]=='i'|| word[i]=='u') cntv++;
        else if(isalpha(word[i])) cntc++;
        else cnt++;
        }
        if(cntc>0 && cntv>0) return true;
        else return false;
    }
};
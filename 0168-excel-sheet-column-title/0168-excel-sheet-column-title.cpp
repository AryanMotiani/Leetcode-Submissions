class Solution {
public:
    string convertToTitle(int columnNumber) {
        unordered_map <int,char> mp;
        int n=columnNumber;
        char a='A';
        for(int i=1;i<=26;i++){
            mp[i]=a;
            a++;
        }
        vector<char> v;
        int ans=0;
        mp[0]='Z';
        while(n>0){
            int x=n%26;
            v.push_back(mp[x]);
            n/=26;
            if(v[v.size()-1]=='Z') n--;
        }
        string s(v.rbegin(),v.rend());
        return s;
    }
};
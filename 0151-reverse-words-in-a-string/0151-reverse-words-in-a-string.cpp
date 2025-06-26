class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        vector<string> a;
        vector<char> x;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                x.push_back(s[i]);
            }
            else{
                if(x.size()!=0){
                    string b(x.begin(),x.end());
                    a.push_back(b);
                    x.clear();
                }
            }
        }
        if(x.size()!=0){
                    string b(x.begin(),x.end());
                    a.push_back(b);
                    x.clear();
                }
        string ans;
        for(int i=a.size()-1;i>=0;i--){
            ans+=a[i];
            if(i>0) ans+=' ';
        }
        return ans;

    }
};
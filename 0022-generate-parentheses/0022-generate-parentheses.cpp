class Solution {
public:
    vector<string> generateParenthesis(int n) {
        //METHOD 1: BRUTE FORCE
        vector<string> ans;
        vector<char> vec;
        for(int i=0;i<n;i++){
            vec.push_back('(');
            vec.push_back(')');
        }
        sort(vec.begin(),vec.end());
        do{
        string s(vec.begin(),vec.end());
        int len=s.size();
        stack <char> st;
        bool ok=1;
        for(int i=0;i<len;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(st.empty()) {
                    ok=0;
                    break;
                }
                if(st.top()=='(') st.pop();
                else ok=0;
            }
            else if(s[i]==']'){
                if(st.empty()) {
                    ok=0;
                    break;
                }
                if(st.top()=='[') st.pop();
                else ok=0;
            }
            if(s[i]=='}'){
                if(st.empty()) {
                    ok=0;
                    break;
                }
                if(st.top()=='{') st.pop();
                else ok=0;
            }
            if(!ok) break;
        }
        if(st.empty() && ok) ans.push_back(s);
        } while(next_permutation(vec.begin(),vec.end()));
        return ans;
        
    }
};
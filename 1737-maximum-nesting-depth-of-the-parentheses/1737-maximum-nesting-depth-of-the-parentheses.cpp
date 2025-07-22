class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int n=s.size();
        stack <char> st;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(st.top()=='(') st.pop();
            }
            int x=st.size();
            ans=max(ans,x);
        }
        return ans;
    }        

};
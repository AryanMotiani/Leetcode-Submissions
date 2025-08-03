class Solution {
public:
    bool checkValidString(string s) {
        int n=s.size();
        stack<char> st,only;

        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='*'){
                if(s[i]!='*') only.push(s[i]);
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false;
                else if(st.top()=='('){
                    st.pop();
                    only.pop();
                }
                else if(st.top()=='*'){
                    if(!only.empty() && only.top()=='('){
                        only.pop();
                        int cnt=0;
                        while(st.top()!='('){
                            cnt++;
                            st.pop();
                        }
                        st.pop();
                        while(cnt--) st.push('*');
                    }
                    else st.pop();
                }
                else return false; 
            }
        }
        vector<char> vec;
        while(!st.empty()){
           vec.push_back(st.top());
           st.pop();
        }
        for(int i=0;i<vec.size();i++){
            if(vec[i]=='*') st.push('*');
            else{
                if(st.empty()) return false;
                else st.pop();
            }
        }
        while(!st.empty()){
            if(st.top()=='*') st.pop();
            else return false;
        }

        if(st.empty()) return true;
        return false;
    }
};
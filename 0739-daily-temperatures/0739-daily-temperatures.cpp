class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<int> st;
        vector<int> a;
        a.push_back(0);
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            if(!st.empty() && temperatures[i]>=temperatures[st.top()]){
                while(!st.empty() && temperatures[st.top()]<=temperatures[i]) st.pop();
                if(!st.empty()) a.push_back(st.top()-i);
                else a.push_back(0);
            }
            else{
                a.push_back(st.top()-i);
            }
            st.push(i);
        }
        reverse(a.begin(),a.end());
        return a;
    }
};
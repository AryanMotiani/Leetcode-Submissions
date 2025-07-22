class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        char x=s[0];
        vector<int> vec;
        for(int i=0;i<n;i++){
            if(goal[i]==x) vec.push_back(i);
        }
        if(n!=goal.size()) return false;
        for(int i=0;i<vec.size();i++){
            int ok=1;
            int k=0;
            for(int j=vec[i];j<n;j++,k++){
                if(s[k]!=goal[j]) ok=0;
            }
            for(int j=0;j<i;j++,k++){
                if(s[k]!=goal[j]) ok=0;
            }
            if(ok) return true;

        }
        return false;
    }
};
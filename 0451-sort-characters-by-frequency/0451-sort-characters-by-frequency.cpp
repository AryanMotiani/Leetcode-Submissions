class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        unordered_map <char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        vector <pair<int,char>> vp;
        for(auto x:mp){
            vp.push_back({x.second,x.first});
        }
        sort(vp.rbegin(),vp.rend());
        vector <char> ans;
        for(auto x:vp){
            for( int i=0;i<x.first;i++) ans.push_back(x.second);
        }
        string fin(ans.begin(),ans.end());
        return fin;
    }
};
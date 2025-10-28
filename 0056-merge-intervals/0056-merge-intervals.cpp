class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& ints) {
        vector<pair<int,int>> a;
        for(int i=0;i<ints.size();i++) a.push_back({ints[i][0],ints[i][1]});
        sort(a.begin(),a.end());
        vector<vector<int>> ans;
        for(int i=0;i<a.size();i++){
            int tmp=a[i].second,j=i+1;
            while(j<a.size() && a[j].first<=tmp){
                tmp=max(a[j].second,tmp);
                j++;
            }
            ans.push_back({a[i].first,tmp});
            i=j-1;
        }
        return ans;
    }
};
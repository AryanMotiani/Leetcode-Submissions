class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>> a;
        for(int i=0;i<n;i++){
            a.push_back({nums[i],i});
        }
        sort(a.begin(),a.end());
        int i=0,j=n-1;
        while(i<j){
            if(a[i].first+a[j].first==target){
                vector<int> x={a[i].second,a[j].second}; 
                sort(x.begin(),x.end()); // in case all negative numbers in array so output indices can be (4,2) instead of (2,4) for example
                return x;
            }
            else if(a[i].first+a[j].first>target) j--;
            else i++;
        }
        return {};
    }
};
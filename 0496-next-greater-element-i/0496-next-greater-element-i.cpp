class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size(),m=nums1.size();
        vector<int> a(m);
        unordered_map<int,int> mp;
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            if(st.empty()) {
                st.push(i);
                mp[nums2[i]]=-1;
            }
            else if(nums2[i]>=nums2[st.top()]){
                while(!st.empty() && nums2[st.top()]<=nums2[i]) st.pop();
                if(!st.empty()) mp[nums2[i]]=nums2[st.top()];
                else mp[nums2[i]]=-1;
                st.push(i);
            }
            else{
                mp[nums2[i]]=nums2[st.top()];
                st.push(i);
            }
        }
        for(int i=0;i<m;i++){
            a[i]=mp[nums1[i]];
        }
        return a;
    }
};
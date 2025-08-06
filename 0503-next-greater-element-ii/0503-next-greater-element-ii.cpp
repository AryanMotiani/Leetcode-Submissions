class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            if(st.empty()) st.push(i);
            else if(nums[i]>=nums[st.top()]){
                while(!st.empty() && nums[i]>=nums[st.top()]) st.pop();
                st.push(i);
            }
            else st.push(i);
        }
        vector<int> a(n);
        for(int i=n-1;i>=0;i--){
            if(st.empty()) {
                st.push(i);
                a[i]=-1;
            }
            else if(nums[i]>=nums[st.top()]){
                while(!st.empty() && nums[i]>=nums[st.top()]) st.pop();
                if(st.empty()) a[i]=-1;
                else a[i]=nums[st.top()];
                st.push(i);
            }
            else {
                a[i]=nums[st.top()];
                st.push(i);
            }
        }
        return a;
    }
};
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> a(rowIndex+1);
        a[0]=1;
        long long ans=1; //imp
        for (int i=1;i<=rowIndex/2;i++){
            ans=(ans*(rowIndex-i+1))/i; //imp
            a[i]=ans;
        }
        for(int i=(rowIndex/2)+1;i<rowIndex;i++){
            a[i]=a[rowIndex-i];
        }
        a[rowIndex]=1;
        return a;
    }
};
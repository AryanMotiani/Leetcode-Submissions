class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>> pasc(n);
        pasc[0].push_back(1);
        for (int i=1;i<n;i++){
            pasc[i].push_back(1);
            for(int j=0;j<i-1;j++){
                pasc[i].push_back(pasc[i-1][j]+pasc[i-1][j+1]);
            }
            pasc[i].push_back(1);
        }
        return pasc;
    }
};
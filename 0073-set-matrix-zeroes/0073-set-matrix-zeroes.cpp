class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        set <int> ilst,jlst;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    ilst.insert(i);
                    jlst.insert(j);
                }
            }
        }
        for (int i=0;i<n;i++){
            if(ilst.find(i)!=ilst.end()){
                for(int j=0;j<m;j++) matrix[i][j]=0;
            }
        }
        for (int i=0;i<m;i++){
            if(jlst.find(i)!=jlst.end()){
                for(int j=0;j<n;j++) matrix[j][i]=0;
            }
        }
        

    
    }
};
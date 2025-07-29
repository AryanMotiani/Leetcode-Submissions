class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=9;
        unordered_set<char> st;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='.') continue;
                if(st.find(board[i][j])!=st.end()) return false;
                st.insert(board[i][j]);
            }
            st.clear();
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[j][i]=='.') continue;
                if(st.find(board[j][i])!=st.end()) return false;
                st.insert(board[j][i]);
            }  
            st.clear();
        }
        int r=3,d=3;
        for(int i=0;i<n;i+=3){
            for(int j=0;j<n;j+=3){
                for(int k=i;k<r+i;k++){
                    for(int l=j;l<d+j;l++){
                        if(board[k][l]=='.') continue;
                        if(st.find(board[k][l])!=st.end()) return false;
                        st.insert(board[k][l]);
                    }
                }
                st.clear();
            }  
        }
        return true;
    }
};
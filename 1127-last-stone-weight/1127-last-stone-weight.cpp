class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        vector<int> tmp;
        while(stones.size()>1){
            int n=stones.size();
            sort(stones.rbegin(),stones.rend());
            bool ok=1;
            for(int i=1;i<n;i++){
                if(stones[i]!=0) {
                    ok=0;
                    break;
                }
            }
            if(ok) return stones[0];
            int diff=stones[0]-stones[1];
            tmp={diff};
            tmp.insert(tmp.end(),stones.begin()+2,stones.end());
            stones=tmp;
        }
        return stones[0];
    }
};
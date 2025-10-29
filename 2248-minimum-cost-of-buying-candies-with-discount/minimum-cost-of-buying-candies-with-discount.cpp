class Solution {
public:
    int minimumCost(vector<int>& cost) {
        if(cost.size()==0) return 0;
        if(cost.size()==1){
            return cost[0];
        }
        int sum=0;
        sort(cost.begin(), cost.end(), greater<int>()); 
        for(int i=0;i<cost.size();i++){
            if(!((i + 1) % 3 == 0)) {
                sum+=cost[i];
            }
        }
        return sum;
    }
};
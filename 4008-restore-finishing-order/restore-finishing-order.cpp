class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>vec;
        for(int i:order){
            for(int j:friends){
                if(i==j){
                    vec.push_back(i);
                }
            }
        }
        return vec;
        
    }
};
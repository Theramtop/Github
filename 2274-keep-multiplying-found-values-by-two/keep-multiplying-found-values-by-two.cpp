class Solution {
public:
    int f(int original,vector<int>& nums){
        for(int i:nums){
            if(i==original) return true;
        }
        return false;
    }
    int findFinalValue(vector<int>& nums, int original) {
        while(f(original,nums)){
            original*=2;
        }
        return original;
        
    }
};
class Solution {
public:
    bool isPrime(int num) {
        if (num <= 1) {
            return false; 
        }
        
        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) {
                return false; 
            }
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int i;
        bool fst=isPrime(nums[0]);
        for(i=0;i<nums.size();i++){
            if(isPrime(nums[i])){
                break;
            }
        }
        int j;
        for(j=nums.size()-1;j>=0;j--){
            if(isPrime(nums[j])){
                break;
            }
        }
        return j-i;

        
    }
};
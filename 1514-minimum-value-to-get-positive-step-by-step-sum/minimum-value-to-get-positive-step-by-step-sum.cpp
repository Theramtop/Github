class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0;
        int minSum = INT_MAX;
        for (int n : nums) {
            sum += n;
            minSum = min(minSum, sum);
        }
        return max(1 - minSum, 1);
    }
};
class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        int leftMax = nums[0];
        int globalMax = nums[0];
        int partitionIdx = 0;

        for (int i = 1; i < n; i++) {
            globalMax = max(globalMax, nums[i]);
            if (nums[i] < leftMax) {
                leftMax = globalMax;
                partitionIdx = i;
            }
        }
        return partitionIdx + 1;
    }
};

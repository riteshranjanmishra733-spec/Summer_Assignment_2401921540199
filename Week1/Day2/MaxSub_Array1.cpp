class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxSum = 0;
        double windowsSum = 0;
        for (int i = 0; i < k; i++) {
            windowsSum += nums[i];
            maxSum = windowsSum / k;
        }
        for (int i = k; i < nums.size(); i++) {
            windowsSum += nums[i];
            windowsSum -= nums[i - k];
            maxSum = max(maxSum, windowsSum / k);
        }
        return maxSum;
    }
};

// Problem - https://www.naukri.com/code360/problems/partition-equal-subset-sum_892980?utm=codolio&leftPanelTabValue=PROBLEM



// --------------------Solution---------------------
bool subsetSum(int idx, vector<int>& arr, int target,
               vector<vector<int>>& dp) {

    if(target == 0)
        return true;

    if(idx == 0)
        return arr[0] == target;

    if(dp[idx][target] != -1)
        return dp[idx][target];

    bool take = false;
    if(arr[idx] <= target) {
        take = subsetSum(idx - 1, arr, target - arr[idx], dp);
    }

    bool notTake = subsetSum(idx - 1, arr, target, dp);

    return dp[idx][target] = take || notTake;
}

bool canPartition(vector<int> &arr, int n) {

    int totalSum = 0;

    for(int x : arr)
        totalSum += x;

    if(totalSum % 2)
        return false;

    int target = totalSum / 2;

    vector<vector<int>> dp(n, vector<int>(target + 1, -1));

    return subsetSum(n - 1, arr, target, dp);
}

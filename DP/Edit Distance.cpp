// Problem - https://www.naukri.com/code360/problems/edit-distance_630420?utm=codolio&leftPanelTabValue=PROBLEM



// ----------------Solution - 1-------------------
#include<algorithm>

int n, m;

int solve(string& str1, string& str2, int i, int j, vector<vector<int>>& dp) {

    if (i == n) {
        return m - j;
    }

    if(j == m) {
        return n - i;
    }

    if (dp[i][j] != -1) {
        return dp[i][j];
    }

    if(str1[i] == str2[j]) {
        return dp[i][j] = solve(str1, str2, i + 1, j + 1, dp);
    }

    int insert = 1 + solve(str1, str2, i, j + 1, dp);

    int delet = 1 + solve(str1, str2, i + 1, j, dp);

    int replace = 1 + solve(str1, str2, i + 1, j + 1, dp);


    return dp[i][j] = min({insert, delet, replace});
}

int editDistance(string str1, string str2)
{
    n = str1.size();
    m = str2.size();

    vector<vector<int>> dp(n, vector<int> (m, -1));

    return solve(str1, str2, 0, 0, dp);
}

//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        int N=arr.size();
        vector<vector<bool>> dp(N + 1, vector<bool>(sum + 1, false));
        for (int i = 0; i <= N; ++i) {
            dp[i][0] = true;
        }
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= sum; ++j) {
                if (arr[i - 1] > j) {
                    dp[i][j] = dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
                }
            }
        }
        return dp[N][sum];
    }
};

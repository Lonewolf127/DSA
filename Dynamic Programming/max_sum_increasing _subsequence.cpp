class Solution{
		

	public:
	int maxSumIS(int arr[], int N)  
	{  
	    vector<int> dp(N);
        for (int i = 0; i < N; ++i) {
            dp[i] = arr[i];
        }
        for (int i = 1; i < N; ++i) {
            for (int j = 0; j < i; ++j) {
                if (arr[i] > arr[j] && dp[i] < dp[j] + arr[i]) {
                    dp[i] = dp[j] + arr[i];
                }
            }
        }
        int maxSum = *max_element(dp.begin(), dp.end());
        return maxSum;
	}  
};

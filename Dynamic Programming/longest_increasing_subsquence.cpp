class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       vector<int> dp;
    
        for (int i = 0; i < n; ++i) {
            auto it = lower_bound(dp.begin(), dp.end(), a[i]);
            if (it == dp.end()) {
                dp.push_back(a[i]);
            } else {
 
                *it = a[i];
            }
        }
        return dp.size();
    }
};

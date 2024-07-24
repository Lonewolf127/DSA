class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
       if (n == 0) return 0;

        long long int max_so_far = arr[0];
        long long int max_ending_here = arr[0];
        long long int min_ending_here = arr[0];

        for (int i = 1; i < n; ++i) {
            if (arr[i] < 0)
                swap(max_ending_here, min_ending_here);

            max_ending_here = max((long long int)arr[i], max_ending_here * arr[i]);
            min_ending_here = min((long long int)arr[i], min_ending_here * arr[i]);

            max_so_far = max(max_so_far, max_ending_here);
        }

        return max_so_far;
	}
};

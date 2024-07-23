class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int partition(int arr[], int l, int r) {
    int pivot = arr[r];
    int i = l;

    for (int j = l; j < r; ++j) {
        if (arr[j] <= pivot) {
            std::swap(arr[i], arr[j]);
            i++;
        }
    }
    std::swap(arr[i], arr[r]);
    return i;
}

int quickSelect(int arr[], int l, int r, int k) {
    if (l <= r) {
        int pivotIndex = partition(arr, l, r);

        if (pivotIndex == k) {
            return arr[pivotIndex];
        } else if (pivotIndex > k) {
            return quickSelect(arr, l, pivotIndex - 1, k);
        } else {
            return quickSelect(arr, pivotIndex + 1, r, k);
        }
    }
    return -1;
}
    int kthSmallest(int arr[], int l, int r, int k) {
       return quickSelect(arr, l, r, k - 1);
    }
    
};

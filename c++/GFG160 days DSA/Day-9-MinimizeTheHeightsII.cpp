class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // Step 1: Sort the array
        sort(arr.begin(), arr.end());
        
        int n = arr.size();
        int m = arr[n - 1] - arr[0]; // Initial max difference
        int ss = m; // Initialize minimum difference as m
        
        // Step 2: Iterate through the array
        for (int i = 0; i < n - 1; i++) {
            // Find the maximum and minimum after modifying the heights
            int l = max(arr[n - 1] - k, arr[i] + k); // Maximum height
            int s = min(arr[0] + k, arr[i + 1] - k); // Minimum height
            
            // Update the minimum difference
            if (s >= 0) { // Only valid if no height becomes negative
                ss = min(ss, l - s);
            }
        }
        
        return ss;
    }
};
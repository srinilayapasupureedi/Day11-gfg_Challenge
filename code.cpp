// Function to find maximum product subarray
     int maxProduct(vector<int> &arr) {
        int n = arr.size();
        if (n == 0) return 0;

        int maxVal = arr[0];
        int currMax = arr[0];
        int currMin = arr[0];

        for (int i = 1; i < n; i++) {
            // If the current number is negative, swap currMax and currMin
            if (arr[i] < 0) {
                swap(currMax, currMin);
            }

            // Update currMax and currMin
            currMax = max(arr[i], currMax * arr[i]);
            currMin = min(arr[i], currMin * arr[i]);

            // Update the global maximum product
            maxVal = max(maxVal, currMax);
        }

        return maxVal;
    }
};

int maximumProfit(vector<int> &arr) {
        
        int profit=0;
        int buy=arr[0];
        int sell;
        for (int i = 1; i < arr.size(); i++) { 
        if (arr[i] > buy) { 
            profit += arr[i] - buy; 
            buy = arr[i]; 
        } else {
            buy = arr[i];
        }
    }
        
        return profit;
        
        
    }
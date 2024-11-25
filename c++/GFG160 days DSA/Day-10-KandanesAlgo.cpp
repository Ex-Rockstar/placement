int maxSubarraySum(vector<int> &arr) {
        int n=arr.size();
        int maxi=INT_MIN;
        int s=0;
        for(int i=0;i<n;i++){
            s+=arr[i];
            maxi = max(s,maxi);
            if(s<0){
                s=0;
            }
        }
        return maxi;
        // code here...
    }
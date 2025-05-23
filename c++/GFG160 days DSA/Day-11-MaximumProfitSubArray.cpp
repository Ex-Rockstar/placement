class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        int n=arr.size();
        int mi=arr[0];
        int ma=arr[0];
        int r=arr[0];
        for(int i=1;i<n;i++){
            
            if(arr[i]<0){
                swap(mi,ma);
            }
            mi=min(arr[i],arr[i]*mi);
            ma=max(arr[i],arr[i]*ma);
            r=max(ma,r);
        }
        return r;
    }
};
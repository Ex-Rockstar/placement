class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int n=arr.size();
        for(auto i=0;i<n/2;i++){
            swap(arr[i],arr[n-i-1]);
        }
    }
};
class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        long long min = arr[0], max = arr[0];  
    
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    return make_pair(min,max);
        
    }
};
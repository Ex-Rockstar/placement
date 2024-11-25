// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int c=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0){
                swap(arr[i],arr[c]);
                c++;
                }
            }
        }
    
};
class Solution{
     public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(vector<int>& arr, int x) {
        int i=0;
        while(i<arr.size()){
            if(arr[i]==x){
                return i;
            }
            i++;
        }
        return -1;
    }
}
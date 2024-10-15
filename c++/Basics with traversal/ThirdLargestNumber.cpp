class Solution{

    public:
    int thirdLargest(vector<int> &arr) {
        sort(arr.begin(),arr.end(),greater<int>());
        return arr[2];
    }
};
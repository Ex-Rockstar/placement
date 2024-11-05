int missingNumber(vector<int>& arr) {
        int n= arr.size()+1;
        int ex=(n*(n+1))/2;
        int ac = accumulate(arr.begin(),arr.end(),0);
        return ex-ac;
    }
    vector<int> findSplit(vector<int>& arr) {
        int n=arr.size();
        
    int sum = accumulate(arr.begin(), arr.end(), 0);
    if(sum%3!=0){
        return {-1,-1};
    }
    vector<int>ans;
    int c=0;
    for(int i=0;i<n;i++){
        c+=arr[i];
        if(c==sum/3){
            ans.push_back(i);
            c=0;
            if(ans.size()==2 && i<n-1){
                return ans;
            }
        }
    }
    return {-1,-1};
    }
 bool twoSum(vector<int>& arr, int target) {
        map<int,int>m;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int t=arr[i];
            int a= target-t;
            if(m.find(a)!=m.end()){
                return true;
            }
            m[t]=i;
        }
        return false;
    }
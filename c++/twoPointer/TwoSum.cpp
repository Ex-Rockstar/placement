bool twoSum(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int l=0,r=n-1;
        while(l<r){
            int sum =arr[l]+arr[r];
            if(sum==target){
                return true;
            }
            else if(sum<target){
                l++;
            }
            else{
                r--;
            }
        }
    
        return false;
    }
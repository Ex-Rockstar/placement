
    int majorityElement(vector<int>& nums) {
     int n=nums.size();
     unordered_map<int,int>m;
     for(auto i:nums){
        m[i]++;
     }   
     for(auto i:nums){
        if(m[i]>n/2){
            return i;
        }
     }
    return -1;
    }
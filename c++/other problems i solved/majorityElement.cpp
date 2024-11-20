vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        
        unordered_map<int,int>mapp;
        for(auto i:arr){
            mapp[i]++;
        }
        vector<int>star;
        int n=arr.size()/3;
        for(auto i:mapp){
            if(i.second>n){
                star.push_back(i.first);
            }
            
        }
        sort(star.begin(),star.end());
        return star;
    }
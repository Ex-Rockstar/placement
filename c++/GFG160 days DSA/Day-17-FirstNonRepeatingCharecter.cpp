 char nonRepeatingChar(string &s) {
        map<char,int>m;
        for(auto i:s){
            m[i]++;
        }
        
        for(auto i:s){
            if(m[i] ==1){
                return i;
          }
        }
        
        return '$';
    }
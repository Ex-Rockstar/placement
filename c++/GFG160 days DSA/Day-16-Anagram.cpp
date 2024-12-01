bool areAnagrams(string& s1, string& s2) {
        map<char,int> m1;

        if(s1.length() !=s2.length()){
            return false;
        }
        for(auto i =0;i<s1.length();i++){
            m1[s1[i]]++;
            m1[s2[i]]--;
        }
        for(auto entry : m1){
            if(entry.second !=0){
                return false;
            }
        }
        return true;
        
        
        
        
    }
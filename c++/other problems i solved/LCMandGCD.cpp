    long long gcd(long long a,long long b ){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    vector<long long> lcmAndGcd(long long a, long long b) {
       
       long long gcdd=gcd(a,b);
       long long lcmm = (a*b)/gcdd; 
       return {lcmm,gcdd};
    }

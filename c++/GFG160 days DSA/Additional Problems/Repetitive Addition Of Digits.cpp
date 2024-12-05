int singleDigit(int n) {
        int s=0;
        while(n>0){
            s+=n%10;
            n/=10;
        }
        if(s>9){
            return(singleDigit(s));
        }
        return s;
    }
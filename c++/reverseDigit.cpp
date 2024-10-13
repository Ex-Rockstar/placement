    int evenlyDivides(int n){
        int c=0;
        
       
        int nn=n;
        while(nn!=0){
            int t=nn%10;
            if(n%t==0){
                c++;
            }
            nn/=10;
        }
        return c;
    }
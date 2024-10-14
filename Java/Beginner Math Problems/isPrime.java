class Solution {
    static int isPrime(int n) {
       if(n==0 || n==1)
       {
           return 0;  
       }
       if(n==2){
           return 1;
       }
       if(n%2==0){
           return 0; //Even numbers are not prime
       }
       
       int sqrt = 1;
       while(sqrt*sqrt<=n)
       {
           sqrt++;
       }
       sqrt--; //Returns the largest integer
       
       for(int i=3; i<=sqrt; i+=2){ //Checks for odd numbers
           if(n%i==0){
               return 0;
           }
       }
       return 1;
    }
}

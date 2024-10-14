class Solution {
    static int isPerfectNumber(long n) {
        if (n == 1) 
        return 0;  
        
        long s = 1;  
        for(long i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                s += i; //Collecting proper divisors
                if (i != n / i) { //Checking whether the paired divisor is different from the other
                    s += n / i; //Adding the divisors 
                }
            }
        }
        return (s == n) ? 1 : 0;
    }
};

class Solution{
public:
    int isPerfectNumber(long long N) {
        if (N <= 1) return 0;  
        
        long long int sum = 1;  
        long long int i;
        
        
        for (i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                sum += i;  
                if (i != N / i) {
                    sum += N / i;  
                }
            }
        }
        
       
        return sum == N ? 1 : 0;
    
        
    }
};
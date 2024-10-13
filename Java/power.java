
class Solution {
    long power(int N, int R) {
        long result = 1;
        long base = N;  
        int mod = 1000000007;

        while (R > 0) {
            
            if ((R & 1) == 1) {
                result = (result * base) % mod;
            }

            base = (base * base) % mod; 
            R >>= 1; 
        }

        return result;
    }
}

class Solution {
    public static int gcd(int a, int b) {
        
        while (b != 0) {
            int temp = b; 
            b = a % b;
            a = temp;     
        } 
/*We using the swap technique to
 retain the original value to use it in the next iteration */
        return a; 
    
    }
}
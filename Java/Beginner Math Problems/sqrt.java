class Solution {
    long floorSqrt(long n) {
        
        long sqrt = 1;
        while(sqrt*sqrt<=n){
            sqrt++;
        }
        return sqrt-1; //Returns the largest values before it exceeds n
    }
}

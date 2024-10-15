class Solution {
  public:
    long long int floorSqrt(long long int n) {
        if (n == 0 || n == 1)
            return n;
        
        long long int start = 1, end = n, ans = 0;
        long long int mid;
        while(start<=end){
            mid = (start+end)/2;
            if(mid*mid ==n){
                return mid;
            }
            if(mid*mid<n){
                start+=1;
                ans=mid;
            }
            else{
            end=mid-1;
            }
        }
        
        return ans;
    }
};
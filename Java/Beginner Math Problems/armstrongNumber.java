class Solution {
    static String armstrongNumber(int n) {
        // code here
        int r,s=0,m=n;
     while(n!=0){
         r=n%10;
         s=s+r*r*r;
         n=n/10;
     }
     if(m==s)
     return "true";
     else
     return "false";
    }
}

/*Armstrong number is a number where the cube of it's digit = the number
153 => 1^3 + 5^3 + 3^3 = 1+125+27= 153
*/
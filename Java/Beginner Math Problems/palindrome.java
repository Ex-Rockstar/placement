class Solution
{
    public String is_palindrome(int n)
    {
        
        int s = 0;
        int m = n;
        while(n!=0){
            int r = n%10;
            s = s * 10 + r;
            n = n/10;
        }
        if(m==s)
        return "Yes";
        else
        return "No";
    }
}
class Solution{   
    public:
		long long int reverse_digit(long long int n)
		{
		    long long int rev=0;
		    while(n>0){
		        int t= n%10;
		        rev = rev*10+t;
		        n/=10;
		        
		    }
		    
		    return rev;
		    
		}

};
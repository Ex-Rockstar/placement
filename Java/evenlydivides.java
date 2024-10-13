class Solution{
    static int evenlyDivides(int N){
        
       int count = 0; 
       int original_n = N;
       
       while (N>0){
           int last_digit = N%10; // Getting the last Digit
           if(last_digit !=0 && original_n % last_digit == 0){
               count++;
           }
           N = N/10; //Removing the last Digit
       }
       return count;
    }
}
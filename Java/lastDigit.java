class Solution {
    static int getLastDigit(String a, String b) {
        int lenA = a.length();
        int lenB = b.length();

        
        if (lenA == 1 && lenB == 1 && b.equals("0") && a.equals("0")) {
            return 1; //0 power 0
        }
        if (lenB == 1 && b.equals("0")) {
            return 1; // Any number power 0
        }
        if (lenA == 1 && a.equals("0")) {
            return 0; // O power any number
        }

        /* Reducing the exponent and setting it 
        to 4 because the maximum cycle = 4 */ 
        int exponent = calcModulus(b, 4) == 0 ? 4 : calcModulus(b, 4);
        
        // Getting the last digit of the base
        int base = a.charAt(lenA - 1) - '0';

        //Looping until the exponent
        int result = 1;
        for (int i = 0; i < exponent; i++) {
            result = (result * base) % 10;
        }

        return result;
    }


   // This is for handling larger inputs 
   // String b is any large number (Potentially the exponent)
    static int calcModulus(String b, int a) {
        int mod = 0;

        
        for (int i = 0; i < b.length(); i++) {
            mod = (mod * 10 + (b.charAt(i) - '0')) % a;
        }

        return mod;
    }

}
class Solution {
    static int getLastDigit(String a, String b) {
        int lenA = a.length();
        int lenB = b.length();

        
        if (lenA == 1 && lenB == 1 && b.equals("0") && a.equals("0")) {
            return 1; 
        }
        if (lenB == 1 && b.equals("0")) {
            return 1; 
        }
        if (lenA == 1 && a.equals("0")) {
            return 0;
        }

      
        int exponent = calcModulus(b, 4) == 0 ? 4 : calcModulus(b, 4);
        
        int base = a.charAt(lenA - 1) - '0';

        
        int result = 1;
        for (int i = 0; i < exponent; i++) {
            result = (result * base) % 10;
        }

        return result;
    }


   
    static int calcModulus(String b, int a) {
        int mod = 0;

        
        for (int i = 0; i < b.length(); i++) {
            mod = (mod * 10 + (b.charAt(i) - '0')) % a;
        }

        return mod;
    }

}
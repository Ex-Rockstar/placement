//problem limk: https://leetcode.com/problems/valid-palindrome/
void removeNonAlphanumeric(string &str) {
    // Use a new string to store the alphanumeric characters
    string result = "";

    for (char ch : str) {
        // If the character is alphanumeric, add it to the result string
        if (isalnum(ch)) {
            result += tolower(ch);  // Convert to lowercase as we add the character
        }
    }

    // Update the original string with the result
    str = result;
}

bool isPalindrome(string s) {
    removeNonAlphanumeric(s);  // Clean the string

    // Check if the string is equal to its reverse
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    
    return (s == reversed);  // Return true if palindrome, false otherwise
}

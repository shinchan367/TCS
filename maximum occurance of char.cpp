//lexicographically
class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
      int freq[26] = {0}; // Array to store frequency of each letter (a-z)
     // Iterate over the string and count the frequency of each character
    for (int i = 0; i < str.size(); i++) {
        freq[str[i] - 'a']++; // Increment the frequency of the current character
    }
    int maxFreq = 0;
    char result = 'a'; // Initialize result with 'a' as a default character
    // Find the character with the highest frequency
    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = 'a' + i; // Update the result to the current character
        } else if (freq[i] == maxFreq) {
            // If there is a tie, pick the lexicographically smaller character
            if ('a' + i < result) {
                result = 'a' + i;
            }
        }
    }
    
return result;
    }

};
//without 
char getMaxOccuringChar(const std::string& str) {
    int freq[26] = {0}; // Array to store frequency of each lowercase letter
    int maxFreq = 0;
    char result = '\0';

    // Iterate over the string and count the frequency of each character
    for (char ch : str) {
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            // Update the result if the current character's frequency is higher
            if (freq[ch - 'a'] > maxFreq) {
                maxFreq = freq[ch - 'a'];
                result = ch;
            }
        }
    }

    return result;
}

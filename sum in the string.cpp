class Solution {
public:

    int sumOfIntegers(string &st, int l) {
        string tempSum = "" ;
        int sum = 0;
        
        for (int i = 0; i < l; i++) {
            // If the character is a digit, add it to tempSum
            if (isdigit(st[i])) {
                tempSum += st[i];
            } 
            else {
                // Convert the number in tempSum to integer and add to sum
                if (!tempSum.empty()) {
                    sum += stoi(tempSum);  // Using stoi instead of atoi
                    tempSum = "";  // Reset tempSum after summing the value
                }
            }
        }
        
        // Add the last number if any
        if (!tempSum.empty()) {
            sum += stoi(tempSum);
        }
        
        return sum;
    }
};

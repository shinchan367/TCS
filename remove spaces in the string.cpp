#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[] = "Take you forward";
    int n = strlen(str);  // Use strlen() to get the length of the C-style string
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (str[i] != ' ') {  // Check if the character is NOT a space
            str[count] = str[i];  // Copy non-space characters
            count++;
        }
    }

    str[count] = '\0';  // Null-terminate the modified string
    cout << str;        // Output the modified string (spaces removed)
    
    return 0;
}

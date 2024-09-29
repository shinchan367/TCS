#include <bits/stdc++.h>
using namespace std;

void begining(int arr[], int n, int value) {
    // Shift elements to the right to make room at the beginning
    for (int i = n - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = value;  // Insert the value at the start
}

void end(int arr[], int n, int value) {
    arr[n] = value;  // Insert the value at the end (arr must have enough space)
}

void specificposition(int arr[], int n, int value, int pos) {
    // Shift elements to the right to make room at the specific position
    for (int i = n; i > pos - 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;  // Insert value at the specific position (pos-1 because of 0-based indexing)
}

int main() {
    int arr[10] = {2, 4, 5, 7, 8, 1, 4};  // Array with extra space for new elements
    int n = 7;  // Current size of the array
    int value = 3;
    int pos = 3;
    
    // Insert at the beginning
    begining(arr, n, value);
    n++;  // Increase size after insertion
    
    // Insert at the end
    end(arr, n, value);
    n++;  // Increase size after insertion
    
    // Insert at a specific position
    specificposition(arr, n, value, pos);
    n++;  // Increase size after insertion

    // Output the array after all insertions
    cout << "Array after insertions: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

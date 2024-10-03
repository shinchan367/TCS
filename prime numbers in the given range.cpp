#include <bits/stdc++.h>
using namespace std;

int countprimes(int left, int right) {
    vector<bool> primes(right + 1, true);
    primes[0] = primes[1] = false;

    if (left < 2) {
        left = 2;
    }

    for (int i = 2; i * i <= right; i++) {
        if (primes[i]) {
            for (int j = i * i; j <= right; j += i) {
                primes[j] = false;
            }
        }
    }

    int sum = 0;  // Initialize sum to 0
    for (int i = left; i <= right; i++) {
        if (primes[i]) {
            sum += i;
        }
    }

    return sum;  // Return the sum of primes
}

int main() {
    int left = 10;
    int right = 40;
    int sum_of_primes = countprimes(left, right);
    
    cout << "Sum of prime numbers between " << left << " and " << right << ": " << sum_of_primes << "\n";
    
    return 0;
}

bool isPrime(int n) {
    // Handle edge cases
    if (n <= 1) return false; // 0 and 1 are not prime numbers

    // Check divisors up to √n for better efficiency
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // n is divisible by i, so it is not prime
        }
    }

    return true; // No divisors found, so n is prime
}

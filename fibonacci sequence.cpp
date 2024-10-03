#include <iostream>
using namespace std;

int fibonacci(int N) {
    if (N <= 1) {
        return N;
    }
    return fibonacci(N - 1) + fibonacci(N - 2);
}

int main() {
    int N = 4;
    cout << fibonacci(N) << endl;
    return 0;
}

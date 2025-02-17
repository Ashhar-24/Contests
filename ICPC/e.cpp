#include <iostream>
#include <cmath>
using namespace std;

const int MOD = 998244353;

// Function to calculate binary length of a number
int binary_length(int x) {
    int len = 0;
    while (x > 0) {
        len++;
        x >>= 1; // Shift right by 1 (equivalent to dividing by 2)
    }
    return len;
}

int concatenateBinaryAndMod(int n) {
    int result = 0;  // The result will hold the large number modulo 998244353

    // Process each number from 1 to n
    for (int i = 1; i <= n; i++) {
        int bitLength = binary_length(i);  // Get the binary length of the current number
        
        // Shift the result left by the number of bits in i (concatenation)
        result = (result * (int)pow(10, bitLength)) % MOD;
        
        // Add the current number to the result
        result = (result + i) % MOD;
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;  // Input the value of n
    cout << concatenateBinaryAndMod(n) << endl;  // Output the result
    return 0;
}

// its noy my code 
#include <iostream>

using namespace std;

// Function to convert negative numbers to binary
string negativeToBinary(int num) {
    string binary = "";

    // Determine the number of bits required to represent the number
    int numBits = sizeof(num) * 8;

    // Check each bit in the number starting from the most significant bit
    for (int i = numBits - 1; i >= 0; --i) {
        // Extract the i-th bit of the number
        int bit = (num >> i) & 1;

        // Append the bit to the binary string
        binary += (char)(bit + '0');
    }

    return binary;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    string binary = negativeToBinary(num);
    cout << "Binary representation: " << binary << endl;

    return 0;
}

#include <iostream>

// Function to reverse the bits of a 32-bit unsigned integer
unsigned int reverseBits(unsigned int n) {
    unsigned int result = 0;
    int bits = sizeof(n) * 8;

    for (int i = 0; i < bits; ++i) {
        if (n & (1 << i)) {
            result |= 1 << ((bits - 1) - i);
        }
    }

    return result;
}

int main() {
    // Example usage
    unsigned int originalNumber = 123;  // Replace with your desired number
    unsigned int reversedNumber = reverseBits(originalNumber);

    std::cout << "Original Number: " << originalNumber << std::endl;
    std::cout << "Reversed Bits: " << reversedNumber << std::endl;

    // Now you can use reversedNumber as the price of each ticket or for any other purpose.
    return 0;
}
#include <iostream>

int main() {
    int n = 5; // You can change this value to adjust the size of the pattern

    // Print the upper triangle
    for (int i = 0; i < n; ++i) {
        // Print spaces
        for (int j = 0; j < n - i - 1; ++j) {
            std::cout << " ";
        }

        // Print asterisks
        for (int k = 0; k < i + 1; ++k) {
            std::cout << "* ";
        }

        std::cout << std::endl;
    }

    // Print the lower triangle
    for (int i = 0; i < n; ++i) {
        // Print spaces
        for (int j = 0; j < i + 1; ++j) {
            std::cout << " ";
        }

        // Print asterisks
        for (int k = 0; k < n - i - 1; ++k) {
            std::cout << "* ";
        }

        std::cout << std::endl;
    }

    return 0;
}

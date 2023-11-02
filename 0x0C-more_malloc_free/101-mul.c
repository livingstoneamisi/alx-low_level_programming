#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

// Function to check if a string is composed of digits only
bool isNumber(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

// Function to multiply two numbers
long long multiply(long long num1, long long num2) {
    return num1 * num2;
}

int main(int argc, char* argv[]) {
    // Check the number of arguments
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    // Get the numbers from the command line arguments
    char* num1_str = argv[1];
    char* num2_str = argv[2];

    // Check if the numbers are composed of digits
    if (!isNumber(num1_str) || !isNumber(num2_str)) {
        printf("Error\n");
        return 98;
    }

    // Convert the numbers to integers
    long long num1 = atoll(num1_str);
    long long num2 = atoll(num2_str);

    // Multiply the numbers
    long long result = multiply(num1, num2);

    // Print the result
    printf("%lld\n", result);

    return 0;
}

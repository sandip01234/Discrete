/*Write a program to implement binary integer addition and multiplication.*/
#include <stdio.h>

// Function to perform binary addition
int binaryAddition(int a, int b) {
    int carry = 0, result = 0, place = 1;

    while (a > 0 || b > 0 || carry > 0) {
        int bitA = a % 2;
        int bitB = b % 2;
        result += (bitA ^ bitB ^ carry) * place;
        carry = (bitA & bitB) | (bitB & carry) | (bitA & carry);
        a /= 2;
        b /= 2;
        place *= 2;
    }
    return result;
}
// Function to perform binary multiplication
int binaryMultiplication(int a, int b) {
    int result = 0, place = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result = binaryAddition(result, a * place);
        }

        b /= 2;
        place *= 2;
    }

    return result;
}

int main() {
    int num1, num2;
    printf("Enter two binary numbers: ");
    scanf("%d %d", &num1, &num2);

    int additionResult = binaryAddition(num1, num2);
    int multiplicationResult = binaryMultiplication(num1, num2);

    printf("Binary Addition: %d\n", additionResult);
    printf("Binary Multiplication: %d\n", multiplicationResult);

    return 0;
}

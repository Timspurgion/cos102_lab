#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, originalNum;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // To store the original number

    // To reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // To check if the original number and reversed number are the same
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}

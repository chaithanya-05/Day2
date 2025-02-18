#include <stdio.h>

// Function to swap two numbers
void swap(int *a, int *b) {
    int temp = *a;  
    *a = *b;        
    *b = temp;     
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before Swapping:\n");
    printf("First Number: %d\nSecond Number: %d\n", num1, num2);

    // Call the swap function by reference
    swap(&num1, &num2);

    printf("After Swapping:\n");
    printf("First Number: %d\nSecond Number: %d\n", num1, num2);

    return 0;
}

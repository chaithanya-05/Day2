#include <stdio.h>

void reverseString(char *str) {
    char *start = str;
    char *end = str;
    char temp;

    // Move the end pointer to the last character
    while (*end != '\0') {
        end++;
    }
    end--;  

    // Swap characters 
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);
    printf("Reversed String: %s\n", str);

    return 0;
}

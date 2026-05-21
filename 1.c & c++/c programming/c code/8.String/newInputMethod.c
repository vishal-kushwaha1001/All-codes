#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Reads input until newline
    printf("You entered: %s\n", str);
    return 0;
}
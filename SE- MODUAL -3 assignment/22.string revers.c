#include <stdio.h>
#include <string.h>

// Function to reverse a string recursively
void reverse(char str[], int start, int end) {
    // Base case
    if (start >= end) {
        return;
    }
    // Swap the characters at start and end positions
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    // Recursive call to reverse the remaining substring
    reverse(str, start+1, end-1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the newline character from fgets
    int len = strlen(str);
    reverse(str, 0, len-1); // Call the reverse function to reverse the string
    printf("Reverse of the string: %s\n", str);
    return 0;
}


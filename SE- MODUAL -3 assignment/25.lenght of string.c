#include <stdio.h>

int main() {
    char str[100]; // Declare a character array to store the string
    int length = 0; // Variable to store the length of the string
    printf("Enter a string: ");
    scanf("%s", str); // Read the string from the user

    // Iterate over each character in the string until the null terminator is encountered
    while (str[length] != '\0')
	{
        length++; // Increment the length for each character
    }

    printf("Length of the string: %d\n", length); // Print the length of the string

    return 0;
}


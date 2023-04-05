//C program to concatenate two strings
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Concatenating the strings
    //strcat is function for concatenate two strings
    strcat(str1, str2);

    // Printing the concatenated string
    printf("Concatenated string: %s", str1);
    return 0;
}

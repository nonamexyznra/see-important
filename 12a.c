#include <stdio.h>
#include <string.h>

void stringCopy(char dest[], const char src[]) {
    strcpy(dest, src);
}

int stringCompare(const char str1[], const char str2[]) {
    return strcmp(str1, str2);
}

void stringReverse(char str[]) {
    strrev(str);
}

int stringLength(const char str[]) {
    return strlen(str);
}

void stringToUpperCase(char str[]) {
    strupr(str);
}

void stringToLowerCase(char str[]) {
    strlwr(str);
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    stringCopy(str1, str2);
    printf("Copied String: %s\n", str1);

    printf("Comparison Result: %d\n", stringCompare(str1, str2));

    stringReverse(str1);
    printf("Reversed String: %s\n", str1);

    printf("Length of String 1: %d\n", stringLength(str1));

    stringToUpperCase(str1);
    printf("Uppercase String: %s\n", str1);

    stringToLowerCase(str2);
    printf("Lowercase String: %s\n", str2);

    return 0;
}

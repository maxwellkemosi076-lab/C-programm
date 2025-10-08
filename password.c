/*
Name: Maxwell Mokogi.
REG number:PA106/G/28786/25.
Description: Password input .
*/

#include <stdio.h>

int main() {
    int password;
    int correct_password = 1234;

    do {
        printf("Enter password: ");
        scanf("%d", &password);
    } while (password != correct_password);

    printf("Access granted\n");

    return 0;
}

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string containing both numbers and alphabets: ");
    scanf("%s", str);
    printf("string without numbers:");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') 
		{ 
            printf("%c", str[i]);
        }
    }

    return 0;
}


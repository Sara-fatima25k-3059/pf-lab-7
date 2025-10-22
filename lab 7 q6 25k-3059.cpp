#include <stdio.h>

int main() {
    int a[5], b[5], c[10];
    int i, j;

    printf("Enter 5 elements for first array:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Enter 5 elements for second array:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < 5; i++)
        c[i] = a[i];

    for (j = 0; j < 5; j++)
        c[i + j] = b[j];

    printf("Merged array: ");
    for (i = 0; i < 10; i++)
        printf("%d ", c[i]);

    return 0;
}

  

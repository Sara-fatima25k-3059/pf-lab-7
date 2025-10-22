#include <stdio.h>

int searchNumber(int arr[], int size, int target); 

int main() {
    int arr[10];
    int target;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &target);

    searchNumber(arr, 10, target); 

    return 0;
}

int searchNumber(int arr[], int size, int target) {
	int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("Number found at index %d\n", i);
        }
        if (i == size-1)
	{
    printf("Number not found in array\n");
    }
   
    }
    
}



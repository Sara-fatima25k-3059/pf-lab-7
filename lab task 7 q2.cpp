#include <stdio.h>

int main() 
{
	int str[5];
	int n;
	printf("Enter the number of elements: ");
    scanf("%d", &n);
	for(int i=0;i<n;i++){
	
	printf("\n enter number ");
	scanf("%d",&str[i]);}
	for (int i=n-1;i>=0;i--)
	{
		printf("%d",str[i]);
		printf("\n");
	} 
	printf("\n");
	return 0;
}

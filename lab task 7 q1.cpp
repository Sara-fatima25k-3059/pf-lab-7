#include <stdio.h>

int main() 
{
	int str[4];
	int sum=0;
	for(int i=0;i<4;i++)
	{
	printf("enter number %d : ",i);
	scanf("%d",&str[i]);
	sum=sum+str[i];
	}
	printf("total sum is %d",sum);
}
	

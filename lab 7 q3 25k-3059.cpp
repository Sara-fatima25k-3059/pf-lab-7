#include <stdio.h>

int main() {
int n ,i,j;
printf(" array size: ");
scanf("%d",&n);
int arr [n];
 for (i=0;i<n;i++){
 printf(" element %d : ",i);
 scanf("%d",&arr[i]);
 }
 for ( i=0;i<n;i++)
 {
     for (j=i+1;j<n;j++)
     {if (arr[i]==arr[j])
     printf("duplicate found %d",arr[i]);
        
     }
 }
  
  
   return 0;
}


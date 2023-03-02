#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,n,t,opc=0, opcount=0;
	printf("enter the number of elements");
	scanf("%d", &n);
	int a[n];
	printf("enter elements in array");
	for(i=0;i<n;i++)
	{
	  scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	{
	  for(j=0;j<n-i-1;j++)
	  {
	  	opc++;
	     if(a[j+1]<a[j])
	     {
	       opcount++;
	       t= a[j];
	       a[j]=a[j+1];
	       a[j+1]=t;
	     }
	  }
	}
	printf("sorted array is ");
	for(i=0;i<n;i++)
	{
	  printf("%d", a[i]);
	}
	printf("\nopcount is: %d", opc);
	printf("\nopcount is: %d", opcount);
}


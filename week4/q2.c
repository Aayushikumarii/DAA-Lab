#include<stdio.h>
#include<stdlib.h>

int fibo(int n)
{
	if(n<2)
		return n;
	else
		return(fibo(n - 2)+fibo(n - 1));
}

int main()
{
	int n, result;
	printf("enter value of n");
	scanf("%d", &n);
	result = fibo(n-1);
	printf("fibonacci number is %d", result);
	return 0;
}
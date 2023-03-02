#include<stdio.h>
#include<stdlib.h>

static int opcount=0;

int ConsecutiveGCD(int m, int n)
{
	int t;
	t=(m<n)? m:n;
	while(t>0)
	{
	   opcount++;
	   if(m%t==0 && n%t==0)
		return t;
	   else 
		t--;
    }
}
int main()
{
	int m,n;
	printf("Enter 2 numbers whose GCD has to be calculated \n");
	scanf("%d" "%d", &m, &n);
	printf("GCD is %d\n", ConsecutiveGCD(m,n));
	printf("Operation count=%d\n", opcount);
	return 0;

}

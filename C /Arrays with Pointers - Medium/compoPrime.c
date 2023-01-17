#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, *p, c=0,d=0;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	p=(int*)calloc(n,sizeof(int));
	printf("Enter elements of array: ");
	for(int i=0; i<n; i++)
	scanf("%d", p+i);
	for(int i=0; i<n; i++)
	{
		c=0;
	for(int j=1;j<=*(p+i);j++)
	{
	if ((*(p+i))%j==0) c++;
	}
	if(c==2) d++;
	}
	printf("Number of primes: %d\n",d);
	printf("Number of composites %d\n", n-d);
	return 0;
}

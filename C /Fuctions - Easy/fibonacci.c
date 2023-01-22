#include <stdio.h>
int main()
{
	int f1,f2,f3,k,i;
	f1=0;
	f2=1;
	scanf("%d",&k);
	printf("%d\n%d\n",f1,f2);
	for(i=1;i<=k-2;i++)
	{
		f3=f1+f2;
		printf("%d\n",f3);
		f1=f2;
		f2=f3;
	}
	return 0;
}

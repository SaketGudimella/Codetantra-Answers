#include <stdio.h> 

int main(){
	int n, *p;
	scanf("%d", &n);
	p=(int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
	scanf("%d",p+i);
	for(int i=0;i<n;i++)
	if(i%2==1)printf("%d ",*(p+i));
	return 0;
}

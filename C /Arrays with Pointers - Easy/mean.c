#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	scanf("%d",&n);
	float a[n];
	float sum=0,mean=0,s=0,x,d, *ptr;
	for(i=0;i<n;i++)
	scanf("%f", &a[i]);
	ptr=a;
	for(i=0;i<n;i++){
		sum+=(*ptr);
		ptr++;
	}
	mean=sum/n;
	ptr=a;
	for(i=0;i<n;i++){
		s+=pow((*ptr-mean),2);
		ptr++;
	}
	x=s/n;
	d=sqrt(x);
	printf("%f\n", sum);
	printf("%f\n", mean);
	printf("%f\n", d);
	return 0;
}

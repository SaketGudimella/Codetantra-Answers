#include <stdio.h>
int large(int a[10],int n)
{
	int i,large=-1000;
	for(i=0;i<n;i++){
		if(a[i]>large){
			large=a[i];
		}
	}
	return large;
}

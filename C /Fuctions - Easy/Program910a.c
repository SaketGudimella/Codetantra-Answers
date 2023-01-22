#include<stdio.h>
#include<math.h>
int convertBinaryToDecimal(int bin)
{
	int dec=0,i=0,r;
	while(bin!=0){
		r=bin%10;
		bin/=10;
		dec+=r*pow(2,i);
		++i;
	}
	return dec;
}

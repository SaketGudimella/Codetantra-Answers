#include <stdio.h>
int gcdResult(int n1, int n2){
	if (n2!=0){
		return gcdResult(n2, n1 % n2);
	}
	else{
		return n1;
	}
}

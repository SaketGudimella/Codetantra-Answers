#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * stringReverse(char *str) {
    char temp;
    int l,i;
    l=strlen(str);
    for(i=0;i<(l/2);i++){
    	temp=str[i];
    	str[i]=str[l-i-1];
    	str[l-i-1]=temp;
    }
   return str;
}

int main(int argc, char *argv[]) {
	char *str = argv[1];
	printf("%s\n", stringReverse(str));
	return 0;
}

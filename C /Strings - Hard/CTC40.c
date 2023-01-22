#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int WordCount (char *Str) {
   int wordCount = 0;
   for( int i = 0;i < strlen(Str)-1;i++){
   	if(Str[i] == ' ' && isalpha(Str[i+1])&& (i>0)){
   		wordCount++;
   	  }
   }
   wordCount++;
   return wordCount;
}

int main(int argc, char *argv[]) {
	char *Str = argv[1];
	printf("%d\n", WordCount (Str));
	return 0;
}

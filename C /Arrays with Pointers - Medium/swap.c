#include <stdio.h>

int main()
{
	int x, y, *a, *b, temp;
	
	
	    scanf("%d%d", &x, &y);


            a = &x;
            b = &y; 
           
              temp = *b;
                *b = *a;
                *a = temp;
       
                 printf("%d %d\n", x, y);
     
              return 0;
              
   }

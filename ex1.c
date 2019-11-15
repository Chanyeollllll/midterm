#include <stdio.h>

main(){
    int c,i,na,n0;
    int ndigit[51];
    
   na = n0 = 0;
   for (i = 0; i<51; ++i)
        ndigit[i] = 0;

   while ((c = getchar()) !=EOF)
   if (c >= '0' && c <= '50')
       ++ndigit[c-'0'];
    else if ( c == '\n'|| c == '\t')
        ++na;
    else
        ++n0;

  printf("digits =");
  for (i = 0; i < 10; ++i)  
  printf("%d",ndigit[i]);
  printf(",The number of a is:=%d, The number of 0 is:=%d\n",
         na,n0);
}
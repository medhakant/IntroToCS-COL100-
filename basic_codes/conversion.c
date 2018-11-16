#include <stdio.h>

int main(int argc, char *argv[])
{

    /* Write your code after this line */
    while (1)
    {int x,n;
    scanf ("%d",&x);
    while (x<0)
  { printf("Input number not in range, please enter again\n");
   scanf ("%d",&x);
  }
    scanf("%d",&n);
   while ((n>=17)||(n<=1))
  { printf("Input base not in range, please enter again\n");
    scanf("%d",&n);
  }
   if ((n>1)&&(n<17)&&(x>0))
   { while (x>0)
    { if ((x%n)<10)
      printf ("%d",(x%n));
      if((x%n)==10)
      printf("A");
      if((x%n)==11)
      printf("B");
      if((x%n)==12)
      printf("C");
      if((x%n)==13)
      printf("D");
      if((x%n)==14)
      printf("E");
      if((x%n)==15)
      printf("F");
        x=x/n;
    }}}

    
   return 0;
}

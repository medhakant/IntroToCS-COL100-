#include <stdio.h>

int main()
{
  int a,b,temp,prod;
  printf("Enter a and b:");
  scanf("%d %d", &a, &b);

  prod=a*b;
  if(a>b)
    {/*swap a,b*/
      temp=a;
      a=b;
      b=temp;
    }

  while ((b%a) !=0)
    { /*replace b with a, a with b%a*/
      temp=b%a;
      b=a;
      a=temp;
    }
  /* a is now the gcd */
  printf("LCM is:%d\n", prod/a);

}/*end main*/

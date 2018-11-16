#include <stdio.h>
/*calculate power of e*/

int main()
{
  double e = 2.718;
  double x, term=0;
  int count,n;
  double sum=0;

  printf("Enter x:");
  scanf("%lf",&x);

  printf("Enter n (1 or higher):");
  scanf("%d", &n);

  if (n<1)
    {
      printf("n value too low\n");
      return 0;
    }

  term =1.0;
  count=1;
  sum = 0.0;
  while ( count <=n)
    { /* begin while */
      sum = sum +term;
      term = term * x/count;
      count = count +1; /* or count++ */
      
    }/*end while*/

  printf("Value of sum of n terms=%lf\n", sum);
  return 0;

}/*end main*/

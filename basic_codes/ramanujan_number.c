#include <stdio.h>

int main()
{
  int a,b,n=1;

  int num_cube_sum=0;

  while(num_cube_sum != 2) /*increase n */
      {
	a=1;
	b=1;
	num_cube_sum=0;
	while(((a*a*a))<=n)
	  { 
	    b=a;
	    while(((a*a*a) + (b*b*b))<=n)
	      {
		if( a*a*a+b*b*b ==n)
		  {
		    num_cube_sum=num_cube_sum+1;
		  }
		b=b+1;
	      }/* increase b while loop*/
	    a=a+1;
	  }/*increase a while loop*/
	n=n+1;
      }/*end while num_cube*/

  printf("Ramanujan's Number=%d\n",n-1);

}/*end main*/

/* Dispense cash from ATM program */

#include <stdio.h>


int main()
{/*main begins*/
  int PIN=7124;
  int balance = 12000;
  int pin_entered=0;
  int amount;
  int count=3;

  

  while ((pin_entered != PIN) && (count>0))
    {/*begin while*/
      printf("Enter PIN:");
      scanf("%d", &pin_entered);

      if (pin_entered != PIN)
	{
	  printf("Incorrect PIN entered\n");
	}
      count = count -1;

    }/*end while*/

  if (pin_entered != PIN)
    return 0;

  /* we jump here if pin_entered is correct */
  printf("Enter amount:");
  scanf("%d",&amount);

  /*check if balance enough*/
  if(balance < amount)
    {
      printf("You don't have enough balance\n");
      return 0; /*quit*/
    }

  balance = balance - amount;
  printf("Collect cash, remaining balance:%d\n",balance);

  return 0;

}/*end main*/

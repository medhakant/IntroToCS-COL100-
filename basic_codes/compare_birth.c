#include<stdio.h>
#include<stdlib.h>
struct DOB               //structure for storing the date of birth in dd mm yyyy format
{
    int dd;
    int mm;
    int yyyy;
};
typedef struct DOB dob;
int compare(dob dob1,dob dob2)
{
    if(dob1.yyyy<dob2.yyyy)
    return -1;
    if(dob1.yyyy>dob2.yyyy)
    return 1;
    else
    {
    if(dob1.mm<dob2.mm)
    return -1;
    if(dob1.mm>dob2.mm)
    return 1;
    else
    {
    if(dob1.dd<dob2.dd)
    return -1;
    if(dob1.dd>dob2.dd)
    return 1;
    else
    return 0;
    }
    }
}
int main()
{
    dob dob1,dob2;
    scanf("%2d %2d %4d",&dob1.dd,&dob1.mm,&dob1.yyyy);
    scanf("%2d %2d %4d",&dob2.dd,&dob2.mm,&dob2.yyyy);
    int m=compare(dob1,dob2);
    printf("%d",m);
}
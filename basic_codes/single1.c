#include<stdio.h>
int main()
{
        int i,j,k,len1,len2;
        char a[256],b[256];

        scanf("%s",&a[0]);
        scanf("%s",&b[0]);
        
i=0;
        while(a[i]!='\0')
    {
         
        i++;
    }

    len1=i;

    j=0;
    while(a[j]!='\0')
{
     
    j++;
}
len2=j;

for(i=0;i<len1;i++)
{
    for(j=0;j<len2;j++)
   {
        if(a[i]==b[j])    
        {
                for(k=1;k<len1-i;k++)
                {
                    if(a[i+k]!=b[j+k])
                        
                                        
                    
                     break;
                }
                
        }
   }

}

if(k==len1-1)
printf("found\n");
 
else
printf("not found\n");
    
      return 0;

}
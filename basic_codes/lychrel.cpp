#include<iostream>
using namespace std;
int palindrome(int a) 
{
    int x=0;
    while (a > 0)
    {x= x*10 + a%10;
     a=a/10; }
    return x;
}
int main()
{
int b=1,c=0,d=0,n=0;
while (b<=10000)
{while (c<=50)
{
d=b+palindrome(b);
if (d==palindrome(d))
{n=n+1;
cout << d<<endl;
break;}
if (d!=palindrome(d))
{b=d;
c++;
d=0;    
}
}
b++;}
cout << n <<endl;

return 0;}

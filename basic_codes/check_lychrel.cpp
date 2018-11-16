#include<iostream>//a program to check whether a given no. is lychrel or not
/*If we take 47, reverse and add, 47 + 74 = 121, which is palindromic.
Not all numbers produce palindromes so quickly. For example,
349 + 943 = 1292,
1292 + 2921 = 4213
4213 + 3124 = 7337
That is, 349 took three iterations to arrive at a palindrome.
Although no one has proved it yet, it is thought that some numbers, like 196, never produce a palindrome. A number that never forms a palindrome through the reverse and add process is called a Lychrel number. Due to the theoretical nature of these numbers, and for the purpose of this problem, we shall assume that a number is Lychrel until proven otherwise. In addition you are given that for every number below ten-thousand, it will either (i) become a palindrome in less than fifty iterations, or, (ii) no one, with all the computing power that exists, has managed so far to map it to a palindrome. In fact, 10677 is the first number to be shown to require over fifty iterations before producing a palindrome: 4668731596684224866951378664 (53 iterations, 28-digits).
Surprisingly, there are palindromic numbers that are themselves Lychrel numbers; the first example is 4994.*/
//Medha Kant
using namespace std;
long long int palindrome(long long int a) //function to find palindrome of a no.
{
    long long int x=0;
    while (a > 0)
    {x= x*10 + a%10;
     a=a/10; }
    return x;
}
//ending the function palindrome with a return value
//starting the function main

int main()
{
cout <<"Enter a no.\n";
long long int b,c=0,d=0;//declaring variables
cin >> b;//taking the input no.
while (c<=60)//the program will reverse and add for atmost 60 times. you wont need more than 50 iterations for no. less than 10000
  {
     d=b+palindrome(b);
     if (d==palindrome(d))
     {cout << "the given no. is not lychrel"<<endl;
     break;//incase it gets d=palindrome(d) , the loop is ended}
     if (d!=palindrome(d))//the case when d isnt equal to palindrome(d)
     {b=d;//equating the value of b+palindrome(b) to b
     c++;//increasing the value of c
     }
  }}
if (c==50)
cout << "the given no. is lychrel"<<endl;
return 0;}
//Still learning

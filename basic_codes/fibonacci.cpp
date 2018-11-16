#include<iostream>
using namespace std;

int main()
{  unsigned int a;
cout << "Upto how many terms do you want the sequence?" << endl ;
cin >> a;
cout << "Here is the sequence with " << a << " terms" << endl ;
double arr[a];
arr[0]=0;
arr[1]=1;
cout << "0" << endl;
cout << "1" << endl;
for (int x=2 ; x < a ; x++ )
{arr[x]=arr[x-1]+arr[x-2];
cout << arr[x]<< endl;}
return 0;
}

#include <iostream>
using namespace std;

int main() {
	double x,n;
	cout<<"Enter n\n";
	cin>>n;
	x=n;
    
    if (n>1)
    {
     while (((x-1)*(x-1))>(n))
    {
    x=x-1;
    }
      while (((x-.25)*(x-.25))>(n))
    {
    x=x-.25;
    }
      while (((x-.0001)*(x-.0001))>(n))
    {
    x=x-.0001;
    }
     while (((x-.000001)*(x-.000001))>(n))
    {
    x=x-.000001;
    }
   cout  <<x;}
    else
   { cout<<"Enter no. greater than 1\n";}
return 0;
}
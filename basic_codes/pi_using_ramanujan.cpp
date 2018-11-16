#include <iostream>
#include<stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int fact(int x)
{ unsigned long long factorial = 1;
    for(int i = 1; i <=x; ++i)
    {
        factorial *= i;
    }
    return factorial;
}



int main()
{ int n;
double a=0,b;
cout << "Enter the no. of terms to be used(preferrably less than 15)"<<endl;
cin >> n;
for (int l=0;l<=n;++l)
    { 
    a=a+((fact(4*l)*(26390*l+1103))/(pow(fact(l),4)*pow(396,4*l))); }
    
    b=(9801/(pow(8,.5)*a));
    cout << setprecision (55) << b <<endl;
    return 0;
    }
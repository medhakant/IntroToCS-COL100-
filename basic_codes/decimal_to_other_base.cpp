#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int n,x;
cout <<"Enter decimal no. n"<<endl;
cin>>n;
cout <<"Enter base x"<< endl;
cin>>x;
vector<int>a;
while (n>0)
{
  a.push_back(n%x);
  n=n/x;  
}
for(int i=a.size()-1;i>=0;i--) 
cout <<a[i];
    return 0;
}
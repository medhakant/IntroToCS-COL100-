#include<iostream>
using namespace std;

int main()
{
int age;
char sex,ms;
cout <<"Enter age"<<endl;
cin >> age;
cout <<"Enter sex"<<endl;
cin >> sex;
 cout <<"Enter marital status\n";
cin >> ms;
    if ((sex=='M' && ms=='M' && age>=25) || (sex=='M' && ms=='U' && age>=30) || (sex=='F' && ms=='M' && age>=20))
    cout <<"Eligible for liscence\n";
    else 
    cout <<"Not Eligible for liscence\n";
return 0;
}

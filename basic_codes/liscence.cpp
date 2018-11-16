#include<iostream>
using namespace std;
int main()
{
int age;
char sex,ms;
cout << "Enter marital status"<<endl;
cin >> ms;
cout << "Enter sex"<<endl;
cin >> sex;
cout << "Enter age"<<endl;
cin >> age;
  if 
    ((sex=='M' && ms=='M' && age>=25) || (sex=='M' && ms=='U' && age>=30) || (sex=='F' && ms=='M' && age>=20))
    {
    cout << "Eligible for liscence" <<endl;
    }
  else 
    {
    cout << "Not Eligible for liscence" <<endl;
    }
return 0;
}

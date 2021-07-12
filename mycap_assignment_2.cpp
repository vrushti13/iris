#include <iostream>
using namespace std;
int main ()
{
int age;
cout<<"Enter your age: ";
cout<<endl;
cin>> age;
if (age>= 18)
{
    cout<<"You are eligible to proceed";
    cout<<endl;
}
else if (age<18)
{
cout<<"You are ineligible to proceed";
cout<<endl;
}
 char a;
 cout<<"Are you an Indian Citizen?";
 cout<<endl;
 cout<<"Enter 'y' for Yes and 'n' for No";
 cout<<endl;
 cin>> a;
if (a == 'y')
{
    cout<<"You are eligible for voting";
}
else if (a == 'n')
{
    cout<<"You are ineligible for voting";
}
else 
{
    cout<<"Invalid input";
}

}
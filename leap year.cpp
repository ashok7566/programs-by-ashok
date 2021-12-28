using namespace std;
#include<iostream>
int main()
{
 int year;
 cout<<"Enter the year for checking\n";
 cin>>year;
 if(year%4==0)
 cout<<year<<"  is a leap year\n";
 else
 cout<<year<<"  is not a leap year\n";
 return 0;
 }

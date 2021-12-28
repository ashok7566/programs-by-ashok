using namespace std;
#include<iostream>
#include<stdlib.h>
float cube(float a)
{
return a*a*a;
}
int main()
{
system("cls");
float num;
cout<<"enter a number:";
cin>>num;
cout<<"\n The Cube Of"<<num<<"is"<<cube(num)<<"\n";
return 0;
}

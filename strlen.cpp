using namespace std;
#include<iostream>
#include<stdio.h>
#include<string.h>
int main()
{
char astr[51];
int length;
cout<<"\n Enter a string(maximum 50 character)\n";
gets(astr);
length=strlen(astr);
puts(astr);
cout<<"\nThe length of the string is:"<<length<<"\n";
return 0;
}

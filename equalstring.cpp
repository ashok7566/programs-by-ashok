using namespace std;
#include<iostream>
#include<string.h>
int main()
{
char string1[50],string2[50];
cout<<"Enter strings\n";
cin.getline(string1,50);
cin.getline(string2,50);
if(strlen(string1)==strlen(string2))
     cout<<"\nBoth strings contains equal numbers of characters\n";
else
   cout<<"\nBoth string contains different number of characters \n";
return 0;
}

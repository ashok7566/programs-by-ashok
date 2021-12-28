using namespace std;
#include<iostream>
#include<stdlib.h>
int main()
{
system("cls");
char string[80],c;
cout<<"\n Enter a string(max.79 character)\n";
cin.getline(string,80);
for(int len=0;string[len]!='\0';++len);
int i,j,flag=1;
for (i=0;i<len/2;++i;)
{
for(j=len-1;j--;)
{
if(string[i]!=string[j])
  {
  flag=0;
  break;
  }
}

}
if(flag)
   cout<<"It is palindrom\n";
else
    cout<<"It is not a palindrom\n";
return 0;
}

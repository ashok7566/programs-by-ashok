using namespace std;
#include<iostream>
int main()
{
int chcount=0;
const char ent='\n';
char ch;
cout<<"Enter character\n";
cin.get(ch);
while(ch!=ent)
{
chcount++;
cout.put(ch);
cin.get(ch);
}
cout<<"\n The number of characters="<<chcount<<"\n";
return 0;
}

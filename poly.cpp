using namespace std;
#include<iostream>
#include<stdlib.h>
class cal

         {
         public: static int add(int a,int b)
                {return a+b;
                }
                static int add(int a,int b,int c)
                {
                return a+b+c;
                }
         };
 int main()
 {
 cal c;
 cout<<c.add(10,30)<<endl;
 cout<<c.add(12,20,13)<<endl;
 return 0;
 }

#include <iostream>
using namespace std;
void calculator(float a, float b, char op) {
   switch (op) {
      case '+': {
         cout<<"\nSum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
         break;
      }
      case '-': {
         cout<<"\nDifference of "<<a<<" and "<<b<<" is "<<a-b<<endl;
         break;
      }
      case '*': {
         cout<<"\nProduct of "<<a<<" and "<<b<<" is "<<a*b<<endl;
         break;
      }
      case '/': {
         cout<<"\nDivision of "<<a<<" and "<<b<<" is "<<a/b<<endl;
         break;
      }
      default:
         cout<<"Invalid Input"<<endl;
   }
}
int main()
{
 float num1,num2;
 char sign;
 cout<<"\n Enter the first number\n";
 cin>>num1;
 cout<<"\n Enter the second number\n";
 cin>>num2;
 cout<<"Enter the sign of operator i.e..(+,-,*,/)\n";
 cin>>sign;
 calculator(num1,num2,sign);
 return 0;
}

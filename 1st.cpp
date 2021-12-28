#include<iostream>
using namespace std;

int main()
{


   int divisor, dividend, quotient, remainder;
   cout<<"Enter the dividend\n";
   cin>>dividend;
   cout<<"Enter the divisor\n";
   cin>>divisor;
   quotient = dividend / divisor;
   remainder = dividend % divisor;
   cout << "Dividend is " << dividend <<endl;
   cout << "Divisor is " << divisor <<endl;
   cout << "Quotient is " << quotient << endl;
   cout << "Remainder is " << remainder;
   return 0;
}

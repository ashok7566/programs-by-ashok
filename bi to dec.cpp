#include <iostream>
using namespace std;
void BiToDec(int n)
 {
   int decimalNumber = 0;
   int base = 1;
   int temp = n;
   while (temp)
   {
      int lastDigit = temp % 10;
      temp = temp/10;
      decimalNumber += lastDigit*base;
      base = base*2;
   }
   cout<<"Decimal form of "<<n<<" is "<<decimalNumber<<endl;;
 }
int main()
 {
   int num;
   cout<<"\n Enter the binary number for convirsion to decimal number \n";
   cin>>num;
   BiToDec(num);
   return 0;
 }

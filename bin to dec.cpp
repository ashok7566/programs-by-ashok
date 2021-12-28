#include <iostream>
using namespace std;
void DecToBin(int n)
{
   int binaryNumber[100], num=n;
   int i = 0;
   while (n > 0)
   {
      binaryNumber[i] = n % 2;
      n = n / 2;
      i++;
   }
   cout<<"Binary form of "<<num<<" is ";
   for (int j = i - 1; j >= 0; j--)
      cout << binaryNumber[j];
}
int main()
{
  int num;
  cout<<"Enter the decimal number for conversion into binary\n";
  cin>>num;
  DecToBin(num);
  return 0;
}

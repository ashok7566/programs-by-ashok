#include<iostream>
using namespace std;
int lcm(int a, int b) {
   if (b == 0)
      return a;
   return lcm(b, a % b);
}
int main() {
   int a,b;
   cout<<"Enter the first number\n";
   cin>>a;
   cout<<"Enter the second number\n";
   cin>>b;
   cout<<"LCM of "<< a <<" and "<< b <<" is "<< (a*b)/lcm(a, b);
   return 0;
}

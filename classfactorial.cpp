#include<iostream>
using namespace std;
class factorial
{
 public:
 int fact=1;
 int num;
 int input();
 void facto();
 void display();

};

int factorial::input()
{
 cout<<"Please enter a number: ";
 cin>>num;
}

void factorial::facto()
{
 while(num>0)
{
fact=fact*num;
num--;
}
}

void factorial::display()
{
 cout<<"Factorial of entered number is: "<<fact;
}

int main()
{
 factorial object;

 object.input();
 object.facto();

 object.display();
 return 0;
}

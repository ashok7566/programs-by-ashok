#include <iostream>
using namespace std;
int main()
{
   char name[26]="ASHOK DWIVEDI";
   char gender = 'M';
   unsigned int salary = 1500000;
   float gpa = 6.0;
   long withdraw = 12047235;
   long long balance = 995324987;

   cout << "Name :"<<name<<endl;
   cout << "Gender : " << gender << endl;
   cout << "Salary for a year : " << salary << endl;
   cout << "GPA is " << gpa << endl;
   cout << "Salary withdrawan: " << withdraw << endl;
   cout << "Total balance : " << balance << endl;
   cout<<"\n\n ---*All the values are  in their type limits---*";
   return 0;
}

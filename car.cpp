using namespace std;
#include<iostream>
#include<stdlib.h>
class car
        {
        public: void simplecar(char ch)
                {
                cout<<"the colour of the car is"<<ch<<"\n";
                cout<<"the model is S60\n";
                cout<<"It is a simple car\n";
                cout<<"the amount of the car is 8000\n";

                }
                void simplecar(int a)
                {
                cout<<"\nthe colour of the car is BLACK\n";
                cout<<"the model is A50\n";
                cout<<"it is a sports car\n";
                cout<<"the amount of the car is"<<a<<"\n";
                }
        };
        int main()
        {
         car c1;
         c1.simplecar('Red');
         c1.simplecar(10000000);
         return 0;
        }


using namespace std;
#include<iostream>
class fibonic
{
public:
       int a,b,nextTerm;
       void generate(int n)
       {
       a=0;b=1;nextTerm=0;

       cout << "Fibonacci Series: " << a << ", " << b << ", ";

         nextTerm = a + b;

        while(nextTerm <=n)
        {
        cout << nextTerm << ", ";
        a = b;
        b = nextTerm;
        nextTerm = a + b;
        }

      }
  };
  int main()
  {
   int n;
   cout<<"enter the no. of terms";
   cin>>n;
   fibonic f1;
   f1.generate(n);
   return 0;
   }


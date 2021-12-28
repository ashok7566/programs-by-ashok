#include<iostream>
using namespace std;
int main ()
{
    int i, j,temp;
    int a[10];
    cout<<"enter the elements which are going to be sorted";
    for(i=0;i<10;i++)
    cin>>a[i];

    for(i = 0; i<10; i++)
    {
        for(j = i+1; j<10; j++)
        {
            if(a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout <<"Printing Sorted Element List ...\n";
    for(i = 0; i<10; i++)
    {
        cout <<a[i]<<"\n";
    }
    return 0;
}

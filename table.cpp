#include <iostream>
using namespace std;

int main()
{
    int n,m;

    cout << "Enter a positive integer: ";
    cin >> n;
     cout<<"Enter the range of table:";
     cin>>m;

    for (int i = 1; i <= m; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}

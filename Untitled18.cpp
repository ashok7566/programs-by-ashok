#include <iostream>
using namespace std;

int main()
{
    int expo;
    float base, result = 1;

    cout << "Enter base and exponent respectively:  ";
    cin >> base >> expo;

    cout << base << "^" << expo << " = ";

    while (expo!= 0) {
        result *= base;
        --expo;
    }

    cout << result;

    return 0;
}

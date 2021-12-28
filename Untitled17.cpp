#include <iostream>
using namespace std;

int main() {
    int n, reverse = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while(n != 0) {
        remainder = n%10;
        reverse = reverse*10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reverse;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int beg, last, i;
    char isPrime = true;

    cout << "Enter two numbers (intervals): ";
    cin >> beg >> last;

    cout << "\nPrime numbers between " << beg << " and " << last<< " are: " << endl;

    while (beg < last) {
        isPrime = true;
        if (beg == 0 || beg == 1) {
            isPrime = false;
        }
        else {
            for (i = 2; i <= beg / 2; ++i) {
                if (beg % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
            cout << beg<< " ";

        ++beg;
    }

    return 0;
}

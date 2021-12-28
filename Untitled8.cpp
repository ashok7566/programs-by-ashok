#include <iostream>
using namespace std;

int main()
{
    char c;
    int isLowerVowel, isUpperVowel;

    cout << "Enter an alphabet: ";
    cin >> c;

    isLowerVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    isUpperVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (isLowerVowel || isUpperVowel)
        cout << c << " is a vowel.";
    else
        cout << c << " is a consonant.";

    return 0;
}

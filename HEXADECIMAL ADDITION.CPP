// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Map for converting hexadecimal
// values to decimal
map<char, int> hex_value_of_dec(void)
{
	// Map the values to decimal values
	map<char, int> m{ { '0', 0 }, { '1', 1 },
					{ '2', 2 }, { '3', 3 },
					{ '4', 4 }, { '5', 5 },
					{ '6', 6 }, { '7', 7 },
					{ '8', 8 }, { '9', 9 },
					{ 'A', 10 }, { 'B', 11 },
					{ 'C', 12 }, { 'D', 13 },
					{ 'E', 14 }, { 'F', 15 } };

	return m;
}

// Map for converting decimal values
// to hexadecimal
map<int, char> dec_value_of_hex(void)
{
	// Map the values to the
	// hexadecimal values
	map<int, char> m{ { 0, '0' }, { 1, '1' },
					{ 2, '2' }, { 3, '3' },
					{ 4, '4' }, { 5, '5' },
					{ 6, '6' }, { 7, '7' },
					{ 8, '8' }, { 9, '9' },
					{ 10, 'A' }, { 11, 'B' },
					{ 12, 'C' }, { 13, 'D' },
					{ 14, 'E' }, { 15, 'F' } };

	return m;
}

// Function to add the two hexadecimal numbers
string Add_Hex(string a, string b)
{
	map<char, int> m = hex_value_of_dec();
	map<int, char> k = dec_value_of_hex();

	// Check if length of string first is
	// greater than or equal to string second
	if (a.length() < b.length())
		swap(a, b);

	// Store length of both strings
	int l1 = a.length(), l2 = b.length();

	string ans = "";

	// Initialize carry as zero
	int carry = 0, i, j;

	// Traverse till second string
	// get traversal completely
	for (i = l1 - 1, j = l2 - 1;
		j >= 0; i--, j--) {

		// Decimal value of element at a[i]
		// Decimal value of element at b[i]
		int sum = m[a[i]] + m[b[j]] + carry;

		// Hexadecimal value of sum%16
		// to get addition bit
		int addition_bit = k[sum % 16];

		// Add addition_bit to answer
		ans.push_back(addition_bit);

		// Update carry
		carry = sum / 16;
	}

	// Traverse remaining element
	// of string a
	while (i >= 0) {

		// Decimal value of element
		// at a[i]
		int sum = m[a[i]] + carry;

		// Hexadecimal value of sum%16
		// to get addition bit
		int addition_bit = k[sum % 16];

		// Add addition_bit to answer
		ans.push_back(addition_bit);

		// Update carry
		carry = sum / 16;
		i--;
	}

	// Check if still carry remains
	if (carry) {
		ans.push_back(k[carry]);
	}

	// Reverse the final string
	// for desired output
	reverse(ans.begin(), ans.end());

	// Return the answer
	return ans;
}

// Driver Code
int main(void)
{
	// Initialize the hexadecimal values
	string str1 = "1B", str2 = "AD";

	// Function call
	cout << Add_Hex(str1, str2) << endl;
}

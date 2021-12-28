// C++ program for above approach
#include <bits/stdc++.h>
using namespace std;
// Function to print Sum and Carry
void Half_Adder(int A,int B){
	//initialize the variables Sum and Carry
	int Sum , Carry;
	
	// Calculating value of sum by applying A XOR B
	Sum = A ^ B;
	
	// Calculating value of Carry by applying A AND B
	Carry = A & B;
	
	// printing the values
	cout<<"Sum = "<< Sum << endl;
	cout<<"Carry = "<<Carry<< endl;
}
//Driver code
int main() {
	int A = 1;
	int B = 0;
	// calling the function
	Half_Adder(A,B);
	return 0;
}

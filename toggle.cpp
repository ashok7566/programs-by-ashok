using namespace std;
#include <iostream>
int ToggleKthBit(int n,int K)
{
	return n ^ (1 << (K-1));
}
int main()
{
	int num,k;

	cout<<"Enter number: ";
	cin>>num;
	cout<<"Enter bit to toggle (value of k): ";
	cin>>k;

	cout<<"Enter number: "<<num<<endl;
	cout<<"Enter k: "<<k<<endl;

	cout<<"original number before toggling: "<<num<<endl;

	int new_number= ToggleKthBit(num,k);

	cout<<"new number after toggling: "<<new_number<<endl;

	return 0;
}

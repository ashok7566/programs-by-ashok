using namespace std;
#include <iostream>

unsigned int swap_odd_even(int num){
	int mask=0xAAAAAAAA;
    unsigned int oddbits = (num&mask);
	unsigned int evenbits = num&(mask>>1);
	return (oddbits>>1) | (evenbits<<1);
}

int main()
{
	int T;
	cout<<"Enter total number of elements (test cases): ";
	cin>>T;

	unsigned int N;

	for(int i=0;i<T;i++)
	{
		cout<<"Enter number: ";
		cin>>N;
		cout<<"Original number is : "<<N<<endl;
		cout<<"Converted number is :"<<swap_odd_even(N)<<endl;
	}

	return 0;
}

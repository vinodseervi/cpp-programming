#include <iostream>
using namespace std;

int factorial(int n) {
	if(n==0) {
		return 1;
	}
	int smallOutput = factorial(n-1);
	int output = n*smallOutput;
	return output;
}

int main() {
	int n;
	cout<<"Enter n : ";
	cin>>n;
	cout<<factorial(n)<<endl;
}

#include <iostream>
using namespace std;

int power(int x, int n) {
	if(n==0) {
		return 1;
	}

	int output = x * power(x,n-1);
	return output;
}

int main() {
	int n,x;
	cout<<"Enter x & n : ";
	cin>>x>>n;;
	cout<<power(x,n)<<endl;
}

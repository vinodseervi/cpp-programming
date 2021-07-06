#include <iostream>
using namespace std;

int printnum(int n) {
	if(n==0) {
		return 0;
	}
	printnum(n-1);
	cout<<n<<" ";
	
	
}

int main() {
	int n;
	cout<<"Enter n : ";
	cin>>n;
	printnum(n);
}

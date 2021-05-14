#include <iostream>
using namespace std;

// prime =1
// not prime =0

bool isprime(int n){
	int d=2;
	while(d<n){
		if(n%d==0){
			return false;
		}
		d++;
	}
	return true;
}

int main() {
	bool ans = isprime(31);
	cout<<ans<<endl;
	
	cout<<isprime(85)<<endl;
}

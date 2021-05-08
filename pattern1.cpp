#include <iostream>
using namespace std;
/*
1
12
123
1234
12345
*/

int main() {
	int n;
	cout <<"Enter n"<<endl;
	cin>>n;
	
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<j;
			j++;
		}
		cout<<endl;
		i++;
	}
}

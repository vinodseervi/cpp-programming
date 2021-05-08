#include <iostream>
using namespace std;
/*
n=4
1
23
456
78910
*/

int main() {
	int n;
	cout <<"Enter n"<<endl;
	cin>>n;
	int val =1;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<val;
			j++;
			val++;
		}
		cout<<endl;
		i++;
	}
}

#include <iostream>
using namespace std;

int main() {
	int n,m;
	cout<< "Enter n & m : ";
	cin>>n>>m;
	int arr[100][100];
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin>>arr[i][j];
		}
	}
	for(int j=0; j<m; j++) {
		int sum=0;
		for(int i=0; i<n; i++) {
			sum += arr[i][j];
		}
		cout<<sum<<endl;
	}
}

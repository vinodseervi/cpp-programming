#include <iostream>

using namespace std;

    // Linear search using function

int linearSearch(int *arr, int n, int x) {
	for(int i=0; i<n; i++) {
		if(arr[i]==x) {
			return i;
		}
	}
	return -1;
}

int main() 
{
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++) {
			cin>> arr[i];
		}
		int val;
		cin >> val;
		cout<<linearSearch(arr, n, val)<<endl;
	}
}

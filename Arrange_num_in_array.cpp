#include <iostream>

using namespace std;

 // Arrange number in array
void arrange(int *arr, int n) {
	int temp=1;
	for(int i=0; i<(n/2)+(n%2); i++) {
		arr[i]=temp;
		temp+=2;
	}
	
	if(n%2==0) {
		temp=n;
	}
	else {
		temp=n-1;
	}
	
	for(int i=(n/2)+(n%2); i<n; i++) {
		arr[i]=temp;
		temp-=2;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		
		int *arr = new int[n];
		arrange(arr, n);
		for(int i=0;i<n; i++) {
			cout<<arr[i]<<" ";
			
		}
		cout << endl;
	}
}

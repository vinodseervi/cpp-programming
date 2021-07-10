#include <iostream>
using namespace std;

bool checkNumber(int arr[],int n, int x) {
	if(arr[0]==x) {
		return true;
	}
	if(arr[0]!=x) {
		return false;
	}
	
	bool issmaller =checkNumber(arr+1, n-1,x);
	return issmaller;
	
}


int main(){
	int n,x;
	cout<<"Enter n & x : ";
	cin>>n>>x;
	cout<<"Enter array : ";
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int result = checkNumber(arr,n-1,x);
	if(result==0) {
		cout<<"true"<<endl;
	}
	else {
		cout<<"false"<<endl;
	}
	
}

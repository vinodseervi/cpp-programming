#include <iostream>
using namespace std;

int sum(int arr[], int n){
	if(n== -1){
		return 0;
	}
	return arr[n]+sum(arr,n-1);
}

int main(){
	int n;
	cout<<"Enter n : ";
	cin>>n;
	cout<<"Enter array : ";
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"sum : "<<sum(arr,n-1)<<endl;
}

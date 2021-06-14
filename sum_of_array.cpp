#include <iostream>

using namespace std;
   // Sum of array
int main()
{
	int n,sum=0;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
		sum+=arr[i];
	}
	
	cout<<"Sum of array : "<<sum<<endl;
}

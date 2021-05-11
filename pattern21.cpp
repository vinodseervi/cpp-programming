#include <iostream>
using namespace std;
/*
Enter n : 5
*****
****
***
**
*
*/

int main()
{
	int n;
	cout<<"Enter n : ";
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n-i+1){
			cout<<"*";
			j++;
		}
		i++;
		cout<<"\n";
	}
}

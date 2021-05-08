#include <iostream>
using namespace std;
/*
Enter n : 5
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/
int main()
{
	int n;
	cout<<"Enter n : ";
	cin>>n;
	int i;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<"*"<<" ";
			j++;
		}
		i++;
		cout<<endl;
	}
}

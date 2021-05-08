#include <iostream>
using namespace std;

/*
Enter n : 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/

int main()
{
	int n;
	cout <<"Enter n : ";
	cin >>n;
	
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<j<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
}

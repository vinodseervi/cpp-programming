#include <iostream>
using namespace std;

/*
Enter n : 5
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
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
			cout<<i<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
}

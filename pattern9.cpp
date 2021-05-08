#include <iostream>
using namespace std;

/*
Enter n : 5
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/

int main()
{
	int n;
	cout <<"Enter n : ";
	cin >>n;
	
	int i=1;
	while(i<=n){
		int j=1;
		int p=i;
		while(j<=i){
			cout<<p<<" ";
			j++;
			p++;
		}
		cout<<endl;
		i++;
	}
}

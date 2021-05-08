#include <iostream>
using namespace std;

/*
Enter n : 5
E
D E
C D E
B C D E
A B C D E
*/

int main()
{
	int n;
	cout <<"Enter n : ";
	cin >>n;
	
	int i=1;
	
	while(i<=n){
		int j=1;
		char starting ='A'+n-i;
		while(j<=i){
			char ch=starting+j-1;
			cout<<ch<<" ";
			j++;
			
		}
		cout<<endl;
		i++;
	}
}

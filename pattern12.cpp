#include <iostream>
using namespace std;

/*
Enter n : 5
A B C D E
B C D E F
C D E F G
D E F G H
E F G H I
*/

int main()
{
	int n;
	cout <<"Enter n : ";
	cin >>n;
	
	int i=1;
	
	while(i<=n){
		int j=1;
		char starting ='A'+i-1;
		while(j<=n){
			char ch=starting+j-1;
			cout<<ch<<" ";
			j++;
			
		}
		cout<<endl;
		i++;
	}
}

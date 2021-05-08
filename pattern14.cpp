#include <iostream>
using namespace std;
/*
Enter n : 5
    *
   **
  ***
 ****
*****
*/

int main()
{
	int n;
	cout<<"Enter n : ";
	cin>>n;
	int i=1;
	while(i<=n){
		int space=1;
		while(space<=n-i){
			cout<<' ';
			space++;
		}
		int star=1;
		while(star<=i){
			cout<<"*";
			star++;
		}
		i++;
		cout<<endl;
	}
}

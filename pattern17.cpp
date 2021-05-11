#include <iostream>
using namespace std;

/*
Enter n : 5
    1
   121
  12321
 1234321
123454321
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
		
		int j=1;
		while(j<=i){
			cout<<j;
			j++;
	    }
	    
	    j=i-1;
	    while(j>=1){
	    	cout<<j;
	    	j--;
		}
	    
	    i++;
	    cout<<endl;
	}
}

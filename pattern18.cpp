#include <iostream>
using namespace std;

/*
Enter n : 5
    *
   ***
  *****
 *******
*********
*/

int main()
{
	int n;
	cout<<"Enter n : ";
	cin>>n;
	int i=1;
	
	// method 1
//	while(i<=n){
//		int space=1;
//		while(space<=n-i){
//			cout<<' ';
//			space++;
//		}
//		
//		int star=1;
//		while(star<=2*i-1){
//			cout<<"*";
//			star++;
//	    }
//	    
//	    
//	    
//	    i++;
//	    cout<<endl;
//	}
//	
	
	//method 2
	
	
	
	while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        j=i-1;
        while(j>=1){
            cout<<"*";
            j--;
        }
        i++;
        cout<<endl;
    }
}

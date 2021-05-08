#include <iostream>
using namespace std;
/*
Enter n : 5
    1
   12
  123
 1234
12345
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
            cout<<" ";
            space++;
        }
        int num=1;
        while(num<=i){
            cout<<num;
            num++;
        }
        i++;
        cout<<endl;
    }
}

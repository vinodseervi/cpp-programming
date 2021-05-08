#include <iostream>
using namespace std;

int main() {
	int f;
	cout <<"Enter fah value" <<endl;
	cin >>f;
	int c=(5.0/9) *(f-32);
	
	int r =10%3;
	
	cout <<c <<endl;
	cout <<r <<endl;
	
	int a,b;
	cout <<"Enter a and b"<<endl;
	cin >>a>>b;
	
	bool isEqual = (a==b);
	bool isAGreater = (a>b);
	bool isALess = (a<b);
	
    cout <<"Are they Equal  " <<isEqual <<endl;
    cout <<"Are they Greater  " << isAGreater <<endl;
    cout <<"Are they Less  " <<isALess <<endl;
    
    bool third = isEqual && isAGreater;
    bool fourth = isEqual || isAGreater;
    
    cout <<"Not equal  "  << !isEqual <<endl;
    // true = 1 and false =0
}

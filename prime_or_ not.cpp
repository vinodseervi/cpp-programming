#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter n : ";
	cin>>n;
	bool divided =false;
	int p=0;
	for(int d=2;d<n;d++){
		if(n%d==0){
			divided =true;
		}
	}
	
	if(divided){
		cout<<"Not Prime"<<endl;
	}
	else{
		cout<<"Prime"<<endl;
	}
} 

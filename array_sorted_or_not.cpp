#include <iostream>
using namespace std;

bool is_sorted(int a[], int size) {
	if(size==0 || size==1){
		return true;
	}
	
	if(a[0]>a[1]){
		return false;
	}
	
	bool isSmallerSorted= is_sorted(a+1, size-1);
	return isSmallerSorted;
}

int main() {
	
	int size;
	cin>>size;
	int a[size];
	for(int i=0; i<size; i++) {
		cin>>a[i];
	}
	int output=is_sorted(a,size);
	
	if(output==0){
		cout<<"false"<<endl;
	}
	else{
		cout<<"true"<<endl;
	}
}

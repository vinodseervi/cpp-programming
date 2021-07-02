#include <iostream>
using namespace std;

void insertionSort(int input[], int n) {
	for(int i=0; i<n; i++) {
		int current = input[i];
		int j;
		for(j =i-1; j>=0; j--) {
			if(current <input[j]) {
				input[j+1] = input[j];
			}
			else {
				break;
			}
		}
		input[j+1] = current;
	}
}

int main() {
	int n;
	cin>>n;
	int input[100];
	for(int i=0; i<n; i++) {
		cin>>input[i];
	}
	insertionSort(input,n);
	for(int i=0; i<n; i++) {
		cout<<input[i]<<' ';
	}
	cout<<endl;
}

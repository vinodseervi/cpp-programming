#include <iostream>
using namespace std;

void BubbleSort(int input[], int n) {
	for(int i=0; i<n-1; i++) {
		for(int j=0; j<n-1; j++) {
			if(input[j] > input[i+1]) {
				int temp = input[j];
				input[j] = input[j+1];
				input[j+1] = temp;
			}
		}
	}
}

int main() {
	int n;
	cin>>n;
	int input[100];
	for(int i=0; i<n; i++) {
		cin>>input[i];
	}
	BubbleSort(input,n);
	for(int i=0; i<n; i++) {
		cout<<input[i]<<' ';
	}
	cout<<endl;
}

#include <iostream>
using namespace std;

   // Reverse Wordwise String

int lenth(char input[]) {
	int count=0;
	for(int i=0; input[i]!='\0';i++) {
		count++;
	}
	return count;
}

void reverseword(char input[], int i, int j) {
	while(i<j) {
		char temp = input[i];
		input[i] = input[j];
		input[j] = temp;
		j--;
		i++;
	}
}

void reversestring(char input[]) {
	int len = lenth(input);
	int i=0,j=len-1;
	while(i<j) {
		char temp = input[i];
		input[i] = input[j];
		input[j] = temp;
		j--;
		i++;
	}
	
	// Reverse individual words in th string
	int start =0,end=0;
	for(i=0; i<len; i++) {
		if(input[i] == ' ') {
			end = i-1;
			reverseword(input,start,end);
			start=i+1;
			end=i+1;
		}
	}
	end=i-1;
	reverseword(input,start,end);
}

int main()
{
	cout<<"Enter string : ";
	char input[100];
	cin.getline(input,100);
	reversestring(input);
	cout<<input<<endl;
   

	return 0;
}

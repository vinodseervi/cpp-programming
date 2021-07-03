#include <iostream>
using namespace std;

   // Reverse String

int lenth(char input[]) {
	int count=0;
	for(int i=0; input[i]!='\0';i++) {
		count++;
	}
	return count;
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

#include <iostream>
using namespace std;

   // Palindrome

int lenth(char input[]) {
	int count=0;
	for(int i=0; input[i]!='\0';i++) {
		count++;
	}
	return count;
}

bool palindrome(char input[]) {
	int len = lenth(input);
	int i=0,j=len-1;
	while(i<j) {
		if(input[i]!=input[j]) {
			return false;
		}
		j--;
		i++;
	}
	return true;
}

int main()
{
	cout<<"Enter string : ";
	char input[100];
	cin>>input;
	cout<< (palindrome(input) ? "true" : "false");
	
     

	return 0;
}

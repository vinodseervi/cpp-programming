#include <iostream>
using namespace std;

   // Trim Space in String

int lenth(char input[]) {
	int count=0;
	for(int i=0; input[i]!='\0';i++) {
		count++;
	}
	return count;
}

void reversestring(char input[]) {
	int len = lenth(input);
	int i=0,j=0;
	for(i=0; i<len; i++) {
		if(input[i]!=' ') {
			input[j]=input[i];
			j++;
		}

	}
	input[j]='\0';
	
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

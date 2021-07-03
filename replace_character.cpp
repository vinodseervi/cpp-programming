#include <iostream>
using namespace std;


   // Replace character

int lenth(char input[]) {
	int count=0;
	for(int i=0; input[i]!='\0';i++) {
		count++;
	}
	return count;
}

void replacechar(char input[], char c1, char c2) {
	int len =lenth(input);
	for(int i=0; i<len; i++) {
		if(input[i]==c1) {
			input[i]=c2;
		}
	}
}

int main()
{
	cout<<"Enter string : ";
	char input[100];
	char c1,c2;
	cin>>input;
	cout<<"Enter char : ";
	cin>>c1;
	cout<<"Enter new char : ";
	cin>>c2;
	replacechar(input,c1,c2);
	cout<<input<<endl;
   

	return 0;
}

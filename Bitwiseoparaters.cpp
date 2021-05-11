#include <iostream>
using namespace std;

int main()
{
	int ror =15 | 30;
	int rand = 15 & 30;
	int rnot = ~15;
	int rxor =15^30;
	int rls =15<<2;
	int rrs =15>>2;
	
	cout<<ror<<endl; //31
	cout<<rand<<endl; //14
	cout<<rnot<<endl; //-16
	cout<<rxor<<endl;  //17
	cout<<rls<<endl;   //60
	cout<<rrs<<endl;   //3
}

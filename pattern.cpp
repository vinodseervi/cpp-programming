#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    //Write your code here
    for(int i=0; i<size; i++) {
      
        for(int j=0;j<size;j++) {
            if(arr[i]==arr[j] && i!=j) {
               return arr[i];
            }
        }
}

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		cout << findUnique(input, size) << endl;
	}

	return 0;
}

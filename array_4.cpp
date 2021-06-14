#include <iostream>
using namespace std;

void arrange(int *arr, int n)
{
    //Write your code here
    if(n%2==0){
        for(int i=0; i<=(n/2)+(n%2); i++){
            int temp=1;
            cin>>arr[temp];
            temp+=2;
        }
    }
    
    else{
        for(int i=((n/2)+(n%2)+1); i<n; i++){
            if(n%2==0){
                int temp=n;
                cin>>arr[temp];
                temp-=2;
            }
            else{
                int temp=n-1;
                cin>>arr[temp];
                temp-=2;
            }
        }
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}

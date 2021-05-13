#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    char arr[9][10]={"one", "two", "three", "four", "five", "six", "seven","eight","nine"};
    if(n<=9){
        cout<<arr[n-1];
    }
    else if(n>9){
        cout<<"Greater than 9";
    }

    // Write Your Code Here

    return 0;
}

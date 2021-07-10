#include<iostream>
int count(int n){
    if(n==0){
        return 0;
        
    }
     
    int small= count(n/10);
    int ans= small+1;
    return ans;
    
}
using namespace std;


int main(){
	cout<<"Enter n: ";
    int n;
    cin >> n;
  
    cout << count(n) << endl;
}




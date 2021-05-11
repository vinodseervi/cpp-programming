#include <iostream>
using namespace std;

int main() {
    /*  
Enter n : 5
    1
   232
  34543
 4567654
567898765
     */
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int i=1;
    while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<' ';
            space++;
        }
        int j=1;
        int p=i;
        while(j<=i){
            
            cout<<p;
            p++;
            j++;
        }
        
       j=i-1;
       int m=(2*i)-2;
        while(j>=1){
            cout<<m;
            j--;
            m--;
        }
        
        i++;
        cout<<endl;
    }
    
}

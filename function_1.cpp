#include<iostream>
using namespace std;
/*
print   n
         c     =    n!/r!(n-r)!
          r
*/          

int factorial(int n) {
	int ans=1;
	int i=1;
	while(i<=n){
		ans=i*ans;
		i++;
	}
	return ans;
}

int main() {
	int n,r;
	cin>>n>>r;
	int fact_n =factorial(n);
	int fact_r =factorial(r);
	int fact_n_r =factorial(n-r);
	int ans=fact_n / (fact_r * fact_n_r);
	cout<<ans<<endl;
}

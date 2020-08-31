#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
	int b,n1,n2;
	cin>>b>>n1>>n2;
	int ans = 0, carry = 0, i=1;

	while(n1 || n2){
		int x=0,y=0;
		if(n1>0){
			x=n1%10;
			n1/=10;
		}
		if(n2>0){
			y=n2%10;
			n2/=10;
		}
		int temp = carry + x + y;
		if(temp < b){
			ans = ans+ temp*i;
			carry=0;
		}
		else{
			ans = ans+ (temp%b)*i;
			carry=1;
		}
		i*=10;
	}
	if(carry)
		ans+= carry*i;
	cout<<ans;
}

//----------------------------------------------------------------------//
int main(){
fastIO
#ifndef ONLINE_JUDGE
	freopen("/home/ashish/CPP/inp.txt","r",stdin);
   	freopen("/home/ashish/CPP/out.txt","w",stdout);
#endif

	int t=1;
	// cin>>t;
	while(t--){
		func();
	}
}
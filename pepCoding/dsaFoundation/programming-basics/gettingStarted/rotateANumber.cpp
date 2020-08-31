#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
	int n,k;
	cin>>n>>k;
	int digits=0,temp=n;
	while(temp>0){
		digits++;
		temp/=10;
	}
	// deb(digits);
	k = k%digits;
	if(k<0)
		k = digits + k ;
	int div=1,mul=1;
	for(int i=0;i<digits;i++){
		if(i<k)
			div*=10;
		else
			mul*=10;
	}

	int right = n%div;
	int left = n/div;
	
	cout<< right*mul + left;
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
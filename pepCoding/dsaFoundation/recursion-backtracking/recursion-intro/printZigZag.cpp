#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//
// string zigzag(int n){	//brute-force
// 	if(n==0)
// 		return "";
// 	string nm1 = zigzag(n-1);
// 	string x = "";
// 	x=(n +'0');
// 	return x+nm1+x+nm1+x;
// }
void zigzag(int n){	//new logic with 2 recursive calls
	if(n==0)
		return;
	cout<<n<<" ";
	zigzag(n-1);
	cout<<n<<" ";
	zigzag(n-1);
	cout<<n<<" ";
}
void func(){
	int n;cin>>n;
	zigzag(n);
}

//----------------------------------------------------------------------//
int main(){
fastIO
#ifndef ONLINE_JUDGE
	freopen("/home/ashish/CPP/inp.txt","r",stdin);
   	freopen("/home/ashish/CPP/out.txt","w",stdout);
#endif

	int t=1;
	// string x = "";
	// x+=(t+'0');
	// cout<<t;
	// cin>>t;
	while(t--){
		func();
	}
}
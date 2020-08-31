#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//
int toBase10(int n,int x){
	int i=1,ans=0;
	while(n>0){
		ans = ans+ (n%10)*i;
		i*=x;
		n/=10;
	}
	return ans;
}
int tobaseX(int n,int x){
	int i=1,ans=0;
	while(n>0){
		ans = ans+ (n%x)*i;
		i*=10;
		n/=x;
	}
	return ans;
}
void func(){
	int n;cin>>n;
	int b1,b2;cin>>b1>>b2;
	if(b1!=10)
		n = toBase10(n,b1);
	// deb(n);
	cout<<tobaseX(n,b2);
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
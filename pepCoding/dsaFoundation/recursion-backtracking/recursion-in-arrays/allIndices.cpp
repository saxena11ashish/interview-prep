#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void all(int* a,int n,vector<int> &v,int x,int i=0){
	if(i==n)
		return;
	if(a[0] == x)
		v.push_back(i);
	all(a+1,n,v,x,i+1);
}

void func(){
	int n;cin>>n;
	int a[n];for(int i=0;i<n;i++)cin>>a[i];
	int x;cin>>x;
	vector<int>v;
	all(a,n,v,x);
	// cout<<v.size();
	for(int i:v)cout<<i<<endl;
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
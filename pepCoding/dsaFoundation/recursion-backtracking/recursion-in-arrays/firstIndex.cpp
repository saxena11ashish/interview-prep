#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//
int first(int *a, int n,int x,int index=0){
	if(n==index)
		return -1;
	int nm1 = first(a+1,n,x,index+1);
	if(a[0]==x)
		return index;
	
	return (nm1!=-1 ? nm1 : -1);
}
void func(){
	int n;cin>>n;
	int a[n];for(int i=0;i<n;i++)cin>>a[i];
	int x;cin>>x;
	cout<<first(a,n,x);
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
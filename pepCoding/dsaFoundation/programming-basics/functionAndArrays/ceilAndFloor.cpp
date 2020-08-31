#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
	int n;cin>>n;
	int a[n];for(int i=0;i<n;i++)cin>>a[i];
	int d;
	cin>>d;

	int ceil = INT_MAX,floor=INT_MIN;
	for(int i=0;i<n;i++){
		if(a[i]==d){
			cout<<d<<endl<<d;
			return;
		}
		if(a[i]>d && a[i]<ceil)
			ceil = a[i];
		else if(a[i]<d && a[i]>floor)
			floor = a[i];
	}
	cout<<ceil<<endl<<floor;
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
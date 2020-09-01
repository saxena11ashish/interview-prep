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
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)cin>>a[i][j];
	}
	
	for(int i=0;i<n;i++){
		int svj = 0;
		for(int j=1;j<n;j++){
			if(a[i][j]<a[i][svj])
				svj = j;
		}

		bool flag=true;
		for(int x=0;x<n;x++){
			if(a[x][svj] > a[i][svj]){
				flag=false;break;
			}
		}
		if(flag){
			cout<<a[i][svj];
			return;
		}
	}
	cout<<"Invalid input";
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
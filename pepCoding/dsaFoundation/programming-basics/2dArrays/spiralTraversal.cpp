#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
	int n,m;cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	}
	int l=0, r=m-1, t=0, b=n-1;
	int count=0;
	while(count<n*m){
		for(int i=t;i<=b && count<n*m;i++){
			cout<<a[i][l]<<endl;
			count++;
		}
		l++;
		for(int i=l;i<=r && count<n*m;i++){
			cout<<a[b][i]<<endl;
			count++;
		}
		b--;
		for(int i=b;i>=t && count<n*m;i--){
			cout<<a[i][r]<<endl;
			count++;
		}
		r--;
		for(int i=r;i>=l && count<n*m;i--){
			cout<<a[t][i]<<endl;
			count++;
		}
		t++;
	}
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
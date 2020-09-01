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

	int i=0,j=0,dir=0;
	while(true){
		dir = (dir+a[i][j])%4;	//dir 0-east, 1-south, 2-west, 3-north
		if(dir==0)j++;
		else if(dir==1)i++;
		else if(dir==2)j--;
		else i--;
		if(i<0){
			i++;break;
		}
		else if(i==n){
			i--;break;
		}
		else if(j<0){
			j++;break;
		}
		else if(j==m){
			j--;break;
		}
	}
	cout<<i<<" "<<j;
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
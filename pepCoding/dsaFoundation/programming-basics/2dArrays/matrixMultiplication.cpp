#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
	int n1,m1,n2,m2;cin>>n1>>m1;
	int a[n1][m1];
	for(int i=0;i<n1;i++){
		for(int j=0;j<m1;j++)
			cin>>a[i][j];
	}
	cin>>n2>>m2;
	int b[n2][m2];
	for(int i=0;i<n2;i++){
		for(int j=0;j<m2;j++)
			cin>>b[i][j];
	}
	if(m1!=n2){
		cout<<"Invalid input";return;
	}
	int ans[n1][m2]={0};

	for(int i=0;i<n1;i++){
		for(int j=0;j<m2;j++){
			int temp=0;
			for(int k=0;k<m1;k++)
				temp += (a[i][k]*b[k][j]);	
			ans[i][j] = temp;
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
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
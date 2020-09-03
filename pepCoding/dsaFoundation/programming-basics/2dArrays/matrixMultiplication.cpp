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
	// int a[n1][m1];
	vector<vector<int>> a(n1, vector<int>(m1));
	for(int i=0;i<n1;i++){
		for(int j=0;j<m1;j++)
			cin>>a[i][j];
	}
	cin>>n2>>m2;
	vector<vector<int>> b(n2, vector<int>(m2));
	for(int i=0;i<n2;i++){
		for(int j=0;j<m2;j++)
			cin>>b[i][j];
	}
	if(m1!=n2){
		cout<<"Invalid input";return;
	}
	vector<vector<int>> ans(n1, vector<int>(m2,0));

	for(int i=0;i<n1;i++){
		for(int j=0;j<m2;j++){
			for(int k=0;k<m1;k++)
				ans[i][j] += (a[i][k]*b[k][j]);	
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
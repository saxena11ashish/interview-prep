#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
	int n1,n2;
	cin>>n1;
	int a[n1];for(int i=0;i<n1;i++)cin>>a[i];
	cin>>n2;
	int b[n2];for(int i=0;i<n2;i++)cin>>b[i];
	int ans[n2],borrow=0;
	for(int i=n1-1,j=n2-1; j>=0 ; j--,i--){
		int y = b[j];
		int x = (i>-1 ? a[i] : 0);
		if(y>=x+borrow){
			ans[j] = y-(x+borrow);
			borrow=0;
		}
		else{
			ans[j] = (y+10) - (x+borrow);
			borrow = 1;
		}
	}
	int i=0;
	while(ans[i]==0){
	    i++;
	}
	while(i<n2)
	    cout<<ans[i++]<<endl;
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
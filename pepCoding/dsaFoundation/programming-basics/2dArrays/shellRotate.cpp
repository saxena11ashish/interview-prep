#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	}
	int s;cin>>s;	s--;
	int r;cin>>r;
	int shellElementCount = 2*(m-2*s) + 2*(n-2*s-2);
//	deb(shellElementCount);
	r = r % shellElementCount;
	if(r<0)
		r += shellElementCount;
	deb(shellElementCount);
	int x[shellElementCount] = {0};

	int left = s;
	int top = s;
	int right = m-s-1;
	int bottom = n-s-1;
	int k=0;
	for(int i=top ; i<=bottom ; i++)
		x[k++] = a[i][left];
	left++;
	for(int i=left ; i<=right ; i++)
		x[k++] = a[bottom][i];
	bottom--;
	for(int i=bottom ; i>=top ; i--)
		x[k++] = a[i][right];
	right--;
	for(int i=right ; i>=left ;i--)
		x[k++] = a[top][i];
	top++;
	// deba(x);
	reverse(x,x+(shellElementCount-r));
	reverse(x+shellElementCount-r, x+shellElementCount);
	reverse(x,x+shellElementCount);
	left = s;
	top = s;
	right = m-s-1;
	bottom = n-s-1;
	k=0;
	for(int i=top ; i<=bottom ; i++)
		a[i][left] = x[k++];
	left++;
	for(int i=left ; i<=right ; i++)
		a[bottom][i] = x[k++];
	bottom--;
	for(int i=bottom ; i>=top ; i--)
		a[i][right] = x[k++];
	right--;
	for(int i=right ; i>=left ;i--)
		a[top][i] = x[k++];
	top++;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout<<a[i][j]<<" ";
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
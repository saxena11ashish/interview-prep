#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//
void reverse(int *a, int leftIndex, int rightIndex){
	for(int i=leftIndex,j=rightIndex;i<j;i++,j--){
		swap(a[i],a[j]);
	}
}
void func(){
	int n;cin>>n;
	int a[n];for(int i=0;i<n;i++)cin>>a[i];
	int k;cin>>k;
	k = k%n;
	if(k<0)
		k = n+k;
	// for(int i=n-k;i<n;i++)cout<<a[i]<<" ";	//JUGAAD
	// for(int i=0;i<n-k;i++)cout<<a[i]<<" ";

	//		abcdef right rotate by 3, ans is defabc
	//	idea->	abc | def
	//	reverse individually
	// 			cba | fed
	//  reverse as whole
	//			def | abc -> defabc which is the answer
	reverse(a,0,n-k-1);
	reverse(a,n-k,n-1);
	reverse(a,0,n-1);
	for(int i:a)cout<<i<<" ";
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
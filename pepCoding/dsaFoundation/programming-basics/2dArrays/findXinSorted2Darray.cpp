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
	int x;cin>>x;
	for(int i=n-1,j=0; i>=0 && j<n ;	){
		if(a[i][j]==x){
			cout<<i<<endl<<j;
			return;
		}
		if(a[i][j] < x)
			j++;
		else
			i--;
	}
	cout<<"Not Found";
}
// void func(){	// works for finding 3 in 1 2 3 but not for 1 2 4
// 				//			              4 5 6			    3 5 6
// 				//			              7 8 9			    7 8 9
// 	int n;cin>>n;
// 	int a[n][n];
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++)cin>>a[i][j];
// 	}
// 	int x;cin>>x;
// 	for(int i=0;i<n;i++){
// 		if(a[i][n-1]==x){
// 			cout<<i<<endl<<n-1;
// 			return;
// 		}
// 		if(a[i][n-1] > x){
// 			int left = 0,right=n-1;
// 			while(left<=right){
// 				int mid = (left+right)/2;
// 				if(a[i][mid] == x){
// 					cout<<i<<endl<<mid;
// 					return;
// 				}
// 				if(a[i][mid] > x)
// 					right = mid-1;
// 				else
// 					left = mid+1;
// 			}
// 			break;
// 		}
// 	}
// 	cout<<"Not Found";
// }

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
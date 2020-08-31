	#include <bits/stdc++.h>

	using namespace std;

	#define lli             long long int
	#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
	#define deb(x)		 cout<<"\n"<<#x<<" = "<<x;
	#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y;
	#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

	//----------------------------------------------------------------------//

	void func(){
		int n;cin>>n;
		if(n>90)cout<<"excellent";
		else if(n>80)cout<<"good";
		else if(n>70)cout<<"fair";
		else if(n>60)cout<<"meets expectations";
		else if(n>90)cout<<"below par";

	}

	//----------------------------------------------------------------------//
	int main(){
	fastIO
	#ifndef ONLINE_JUDGE
		freopen("/home/ashish/CPP/inp.txt","r",stdin);
	   	freopen("/home/ashish/CPP/out.txt","w",stdout);
	#endif

		int t=1;
		//cin>>t;
		while(t--){
			func();
		}
	}
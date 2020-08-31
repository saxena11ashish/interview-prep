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
	int a[n1];
	for(int i=0;i<n1;i++)
		cin>>a[i];
	cin>>n2;
	int b[n2];
	for(int i=0;i<n2;i++)
		cin>>b[i];
	int temp = max(n1,n2);
	int ans[temp],carry=0;
	for(int i=n1-1,j=n2-1,k=temp-1 ; k>=0 ;i--,j--,k--){
		int x = (i>-1 ? a[i]: 0);
		int y = (j>-1 ? b[j]: 0);

		int t= x+y+carry;
		if(t<=9){
			ans[k] = t;
			carry=0;
		}
		else{
			ans[k] = t%10;
			carry=1;
		}
	}
	if(carry)cout<<1<<endl;
	for(int i:ans)cout<<i<<endl;
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
/*
#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
	int n1,n2,temp;
	cin>>n1;
	vector<int> v1,v2,ans;
	for(int i=0;i<n1;i++){
		cin>>temp;
		v1.push_back(temp);
	}
	cin>>n2;
	for(int i=0;i<n2;i++){
		cin>>temp;
		v2.push_back(temp);
	}
	// deba(v1);
	// deba(v2);	
	reverse(v1.begin(),v1.end());
	reverse(v2.begin(),v2.end());
	// deba(v1);
	// deba(v2);
	int carry=0;
	int i;
	for(i=0;i<min(n1,n2);i++){
		temp = v1[i]+v2[i]+carry;
		if(temp<=9){
			ans.push_back(temp);
			carry=0;
		}
		else{
			ans.push_back(temp%10);
			carry=1;
		}
	}
	while(i<n1){
		temp = v1[i]+carry;
		if(temp<=9){
			ans.push_back(temp);
			carry=0;
		}
		else{
			ans.push_back(temp%10);
			carry=1;
		}		
		i++;
	}
	while(i<n2){
		temp = v2[i]+carry;
		if(temp<=9){
			ans.push_back(temp);
			carry=0;
		}
		else{
			ans.push_back(temp%10);
			carry=1;
		}	
		i++;	
	}
	if(carry)ans.push_back(1);
	while(ans.size()>0){
		cout<<ans.back()<<endl;
		ans.pop_back();
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
*/
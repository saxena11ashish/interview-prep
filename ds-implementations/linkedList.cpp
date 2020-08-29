#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y;

//----------------------------------------------------------------------//
// 								LINKED LIST
class Node{
public:
	int data;
	Node* next;
	Node(int data){		//CONSTRUCTOR
		this->data = data;
		this->next = NULL;
	}
};

Node* createLL(){
	Node * head = NULL,*tail;
	for(int i=0;i<10;i++){
		if(head == NULL){
			head = new Node(i);
			tail = head;
		}
		else{
			tail->next = new Node(i);
			tail = tail->next;
		}
	}
	return head;
}

void printLL(Node * head){
	while(head!=NULL){
		cout << head->data <<" ";
		head = head->next;
	}cout<<endl;
}

Node* reverseLL(Node * head){
	if(head == NULL || head->next == NULL)
		return head;
	Node* prev=NULL,*curr = head, *ahead;
	while(curr){
		ahead = curr->next;
		curr->next = prev;
		prev = curr;
		curr = ahead;
	}
	return prev;
}
void func(){
	Node* head = createLL();
	printLL(head);
	head = reverseLL(head);
	printLL(head);
}

//----------------------------------------------------------------------//
int main(){
fastIO
#ifndef ONLINE_JUDGE
	freopen("/home/ashish/CPP/testing/inp.txt","r",stdin);
   	freopen("/home/ashish/CPP/testing/out.txt","w",stdout);
#endif

	int t=1;
	cin>>t;
	while(t--){
		func();
	}
}

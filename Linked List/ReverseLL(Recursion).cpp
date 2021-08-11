//Reverse a Linked List Using RECURSION
#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};
Node *head;

void Print(Node *p){
	if(p==NULL){
		cout<<endl;
		return;
	}
	cout<<p->data<<" ";
	Print(p->next);
}

void Insert(int x){
	Node *temp = new Node();
	temp->data = x;
	temp ->next = NULL;
	if(head==NULL){
		head = temp;
		return;
	}
	Node *temp1=head;
	while(temp1->next!=NULL){
		temp1=temp1->next;
	}
	temp1->next = temp;
}

void Reverse(Node *p){
	if(p->next == NULL){
		head = p;
		return;
	}
	 
	 Reverse(p->next);
	 
	 Node *q = p->next;
	 q->next=p;
	 p->next = NULL;
}

int main(){
	head=NULL;
	
	int n;
	cout<<"how many numbers?"<<endl;
	cin>>n;
	
	cout<<"Insert the numbers:"<<endl;
	int num;
	for(int i=0;i<n;i++){
		cin>>num;
		Insert(num);
	}
	cout<<"The List is:"<<endl;
	Print(head);
	
	cout<<"Reversing the List:"<<endl;
	
	Reverse(head);
	
	cout<<"Reversed List:"<<endl;
	Print(head);
	return 0;
	
}

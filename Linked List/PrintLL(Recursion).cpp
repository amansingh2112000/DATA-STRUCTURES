//Print Linked List using Recursion
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

//we are not actually reversing the Linked List we are just Printing it in Reverse Order
void ReversePrint(Node *p){
		if(p==NULL){
		return;
	   }
	ReversePrint(p->next);
	cout<<p->data<<" ";
		   
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
	
	cout<<"List in Reversed Order:"<<endl;
	ReversePrint(head);
	
	return 0;
	
}

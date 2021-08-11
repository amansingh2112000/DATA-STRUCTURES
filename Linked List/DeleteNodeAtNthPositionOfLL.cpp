//Delete a node at nth position of a Linked List
#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

Node *head;

void Insert(int x){
	Node *temp = new Node();
	temp->data = x;
	temp->next = NULL;
	if(head==NULL){
		head=temp;
		return;
	}
	Node *temp1 = head;
	while(temp1->next!=NULL){
		temp1=temp1->next;
	}
	temp1->next=temp;
}
void Print(){
	Node *temp = head;
	cout<<"The List is:"<<endl;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}cout<<endl;
}

void Delete(int x){
	Node *temp1=head;
	if(x==1){
		head=temp1->next;
		delete temp1;
		return;
	}
	int i;
	for(i=0;i<x-2;i++){
		temp1=temp1->next;
	}
	Node *temp2 = temp1->next;
	
	temp1->next = temp2->next;
	
	delete temp2;
}

int main(){
	head = NULL;
	int n;
	cout<<"how many numbers?"<<endl;
	cin>>n;
	cout<<"Insert the numbers:"<<endl;
	int num;
	for(int i=0;i<n;i++){
		cin>>num;
		Insert(num);
	}
	Print();
	
	int p;
	cout<<"Enter a position to delete:"<<endl;
	cin>>p;
	
	Delete(p);
	
	Print();
	
	return 0;
}

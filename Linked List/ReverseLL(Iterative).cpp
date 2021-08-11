//Reverse a Linked List(Iterative Method)
#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

Node *head;

void Reverse(){
	Node *prev,*current,*next;
	current = head;
	prev = NULL;
	
	while(current!=NULL){
		next = current->next;
		current->next = prev;
		prev=current;
		current=next;
	}
	head = prev;
	
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

void Print(){
	Node *temp = head;
	cout<<"The List is:"<<endl;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}cout<<endl;
	
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
	Print();

	Reverse();
	cout<<"Reversing the List:"<<endl;
	Print();
	
	return 0;
	
}

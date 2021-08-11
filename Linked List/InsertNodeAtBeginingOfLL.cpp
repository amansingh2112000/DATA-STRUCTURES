//Insert a node at the Begining of a Linked List
#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};

Node* head;
void Insert(int x){
	Node* temp=new Node();
	temp->data=x;
	temp->next=head;
	head=temp;
}

void Print(){
	Node *temp=head;
	cout<<"List is:"<<endl;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}cout<<endl;
}

int main(){
	head=NULL;
	cout<<"How many numbers?"<<endl;
	int n,i,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter the number"<<endl;
		cin>>x;
		Insert(x);
		Print();
	}
	return 0;
}

#include<iostream>
using namespace std;

int LinearSearch(int *arr,int n,int x){	
	for(int i=0;i<n;i++){
		if(x==arr[i]){
			return i;
		}
	}
	return -1;
}

int main(){
	int n;
	cout<<"Enter n:"<<endl;
	cin>>n;
	
	int input[1000];
	
	cout<<"Enter Elements:"<<endl;
	
	for(int i=0;i<n;i++){
		cin>>input[i];
	}
	
	 int x;
	 cout<<"Enter Element to be searched:"<<endl;
	 cin>>x;
	 
	cout<<"Index at which element x is present:"<<LinearSearch(input,n,x)<<endl;
}
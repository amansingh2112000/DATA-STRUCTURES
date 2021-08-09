#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter n:"<<endl;
	cin>>n;
	
	int arr[1000];
	
	cout<<"Enter Elements:"<<endl;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
    //bubble sort
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
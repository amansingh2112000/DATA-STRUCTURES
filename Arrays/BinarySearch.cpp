#include<iostream>
using namespace std;

int BinarySearch(int *arr,int n,int x){	
    int start=0;
    int end=n-1;
    int mid=start;

    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]>x){
            end=mid-1;
        }
        else if(arr[mid]<x){
            start=mid+1;
        }
        else{
            return mid;
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
	 
	cout<<"Index at which element x is present:"<<BinarySearch(input,n,x)<<endl;
}
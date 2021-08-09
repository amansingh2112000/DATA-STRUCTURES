/*Arrays Challenge-First Repeating Element
(Amazon, Oracle)
Problem
Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.
Constraints
1 <= N <= 106
0 <= Ai <= 106
Example
Input:
7
1 5 3 4 3 5 6
Output:
2
Explanation:
5 is appearing twice and its first appearance is at index 2 which is less than 3
whose first occurring index is 3.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 

    const int N=1e6+2;
     bool check[N];

    for(int i=0;i<N;i++){
        check[i]=false;
    }

    for(int i=0;i<n;i++){
        if(a[i]>=0){
            check[a[i]]=true;
        }
    }
    int ans=-1;

    for(int i=1;i<N;i++){
        if(check[i]==false){
            ans=i;
            break;
        }
    }

    cout<<ans<<endl;

}
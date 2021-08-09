/*Given an array arr[] of size n, find the first repeating element. The element should occurs more than once and 
the index of its first occurrence should be the smallest.

Example 1:
Input:
n = 7
arr[] = {1, 5, 3, 4, 3, 5, 6}
Output: 2
Explanation: 
5 is appearing twice and 
its first appearence is at index 2 
which is less than 3 whose first 
occuring index is 3.

Example 2:
Input:
n = 4
arr[] = {1, 2, 3, 4}
Output: -1
Explanation: 
All elements appear only once so 
answer is -1.

Your Task:
You don't need to read input or print anything. Complete the function firstRepeated() which takes arr and n as input parameters and return the position of the first repeating element. If there is no such element, return -1.
The position you return should be according to 1-based indexing. 

Expected Time Complexity: O(nlogn)
Expected Auxilliary Space: O(n)

Constraints:
1 <= n <= 106
0 <= Ai<= 106 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    const int N=pow(10,6)+2;
    int idx[N];
    int minidx=INT_MAX;
    for(int i=0;i<N;i++){
        if((idx[a[i]])!=-1){
            minidx=min(minidx,idx[a[i]]);
        }
        else{
            idx[a[i]]=i;
        }
    }

    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx+1<<endl;
    }
    return 0;
}

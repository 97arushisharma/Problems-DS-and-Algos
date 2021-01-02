#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void insert(int *arr, int k,int n){
    arr[n+1] = k;
    ++n;
    //cout<<arr[n]<<n;
    while(n>1 && arr[n] > arr[n/2]){
        swap(arr[n],arr[n/2]);
        n=n/2;
    }
}
int main()
{
   cout << "Hello World" << endl;
   int n;
   cin>>n;
   int arr[100];
   
   for(int i=1;i<=n;i++){
       cin>>arr[i];
   }
   for(int i=1;i<=n;i++){
       cout<<arr[i]<<" ";
   }
   cout<<"\n";
   insert(arr,35,n);
   
   for(int i=1;i<=n+1;i++){
       cout<<arr[i]<<" ";
   }
   return 0;
}

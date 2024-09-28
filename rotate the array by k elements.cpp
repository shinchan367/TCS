#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int a,int b,int k){
  for(int i=0;i<k;i++){
    int temp=arr[a+i];
    arr[a+i]=arr[b+i];
    arr[b+i]=temp;
}
}
void blockswap(int arr[],int n,int k){
if(k==0 || k==n){
  return;
}
  if(k==n-k){
    swap(arr,0,n-k,k);
    return;
  }
  else if(k<n-k){
    swap(arr,0,n-k,k);
    blockswap(arr,n-k,k);
  }
  else{
    swap(arr,0,k,n-k);
    blockswap(arr+n-k,2*k-n,k-(n-k));
  }
}
int main(){
  int arr[]={1,2,3,6,8};
  int n=sizeof(arr)/sizeof(arr[0]);
   int k=2;
  blockswap(arr,n,k);
  cout << "After Rotating the array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
return 0;
}
}

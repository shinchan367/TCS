#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={9,4,8,2,1,5};
  int n=sizeof(arr)/sizeof(arr[1]);
  sort(arr,arr+n);
  for(int i=0;i<n/2;i++){
    cout<<arr[i];
  }
  for(int i=n-1;i>=n/2;i--){
    cout<<arr[i];
  }
return 0;
}

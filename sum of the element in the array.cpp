#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={2,3,1,4,5};
  int n=sizeof(arr)/sizeof(arr[1]);
int sum=0;
 // cout<<accumulate(arr, arr + n, sum); stl

  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  cout<<sum;
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={4,7,1,2,5,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  sort(arr,arr+n);
  if(n%2==0){
    int ind1=n/2-1;
    int ind2=n/2;
    double median=(arr[ind1]+arr[ind2])/2.0;
    cout<<median<<endl;
  }
  else{
    cout<<arr[n/2]<<endl;
  }
return 0;
}

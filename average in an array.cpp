#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={2,4,5,6,7,8,2,1};
  int n=sizeof(arr)/sizeof(arr[0]);
double sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  double average=sum/n;
  cout<<average;
return 0;
}

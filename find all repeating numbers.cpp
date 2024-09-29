#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={2,2,2,2,3,4,4,4,4,7,8,1,1,1,9};
  int n=sizeof(arr)/sizeof(arr[0]);
unordered_map<int,int>mp;
  for(int i=0;i<n;i++){
    mp[arr[i]]++;
  }
  for(auto it:mp){
    if(it.second>1){
      cout<<it.first;
    }
  return 0;
}

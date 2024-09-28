#include<bits/stdc++.h>
using namespace std;
int countfreq(int arr[],int n){
  unordered_map<int,int>mp;
  for(int i=0;i<n;i++){
    mp[arr[i]]++;
  }
  for(auto j:mp){
    cout<<j.first<<" "<<j.second<<endl;
  }

}
int main(){
  int arr[]={2,2,2,2,3,3,4,5,6,6};
  int n=sizeof(arr)/sizeof(arr[1]);
  countfreq(arr,n);
  return 0;
}

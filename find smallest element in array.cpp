#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2, 4 ,5, 6, 7,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
     int mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
       
    }
    cout<<mini;
     return 0;
}

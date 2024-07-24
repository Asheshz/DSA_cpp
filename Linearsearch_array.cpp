#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int n, int k){
  for(int i=0; i<n; i++){
    if(arr[i]==k){
      return i;
    }
  }
  return -1;
}

int main(){
  int arr[4]={1,2,3,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 4;
  int ar = linearSearch(arr,n,k);
  cout << ar << " ";
}

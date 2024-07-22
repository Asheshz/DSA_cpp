//Reverse a Array
int reverse(int arr[],int n){
  int left = 0;
  int right = n-1;

  while(left<right){
    int temp = arr[left];
    arr[left]=arr[right];
    arr[right]=temp;

    left++;
    right--;
  }
}
//Rotate according to D
void rotateP(int arr[],int n, int d){
  reverse(arr,arr+d);
  reverse(arr+d,arr+n);
  reverse(arr,arr+n);
}

int main(){
  int arr[6] = {1,2,3,4,5,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  int d;
  cin >> d;
  rotate(arr,n);
   rotateP(arr,n,d);
  for (int i = 0; i < n; i++) {
         cout << arr[i] << " ";
    }
}

#include <iostream>
#include <algorithm>
using namespace std;


void secondLargestElement(int arr, int n){
  if(n<2){
     cout<<-1;
  }
  sort(arr, arr+n);
  int large = arr(n+1);
  for(int i==2; i>=0; i--){
      if(arr[i]!=large)
        cout<<arr[i];
  }
  return -1;
}
int main(){
 int arr[]={2,4,6,8};
 int n = sizeof(arr)/sizeof(arr[0]);
 cout<<"second largest element: "<<secondLargestElement;
}

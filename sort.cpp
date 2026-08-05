#include <bits/stdc++.h>
using namespace std;

void sortingArray(int arr[], int n){
   sort(arr, arr+n);
}

int main(){
    int arr[] = {1,6,4,7,3,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortingArray(arr,n);
    cout<<"sorted array:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n){
    sort(arr, arr+n);
    return arr[n-1];
}
int main(){
    int arr[] = {1,7,8,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"largest element: "<<largestElement(arr, n)<<endl;

}

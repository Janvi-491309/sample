#include <iostream>
using namespace std;
int main(){
int n,i,b=0;
cout<<"enter n:";
cin>>n;
for(i=1;i<=n;i++){
if(n%i==0){
b++;
}
}
if (b==2){
cout<<"n is prime number"<<endl;
}
else{
cout<<"n is not a prime number"<<endl;
}
}

#include<iostream>
using namespace std;
int main(){
   int a[3];
   for(int i =1;i<=3;i++){
    cin>> a[i];
   }
   for(int i=1;i<=3;i++){
    for(int j =1;j<=3;j++){
        cout<<"("<<i<<","<<j<<")";
        cout<<", ";
    }
   }
    return 0;
}
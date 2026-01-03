#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    int c=0;
    for(int i =0;i<n;i++){
        c=c+a[i];
    }
    if(c>0){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }

    return 0;
}
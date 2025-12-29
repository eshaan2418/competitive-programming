#include<iostream>
using namespace std;
int main(){
    int a,c;
    char b;
    cin>>a>>b>>c;
    if(a>c && b=='>'){
        cout<<"Right"<<endl;
    }else if(a<c && b=='<'){
        cout<<"Right"<<endl;
    }else if(a==c && b=='='){
        cout<<"Right"<<endl;
    }else{
        cout<<"Wrong"<<endl;
    }
    return 0;
}
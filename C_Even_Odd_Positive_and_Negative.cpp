#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    int even=0;
    int odd=0;
    int positive = 0;
    int negative = 0;

    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }else{
            odd++;
        }
        if(a[i]<0){
            negative ++;
            
        }else if(a[i]>0){
             positive++;
        }
    }
    cout<< "Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;

    return 0;
}
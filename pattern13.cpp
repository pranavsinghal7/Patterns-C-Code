#include<iostream>
using namespace std;
int main(){
    int i,j,k,l,m,n;
    cin>>n;
    for(j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
        for(i=1;i<=n-2;i++){
            for(k=1;k<=n;k++){
        if(k==1||k==n){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    } cout<<endl;
        }
    for(j=1;j<=n;j++){
            cout<<"*";
        }
}
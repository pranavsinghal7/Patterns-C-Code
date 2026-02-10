#include<iostream>
using namespace std;
int main(){
    int i,j,s,n;
    cin>>n;
    for(i=n;i>0;i--){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(s=1;s<=i;s++){
            cout<<"*";
        }
        cout<<endl;
    }

}
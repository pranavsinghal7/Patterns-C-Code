/*
    *
   ***
  *****
 *******
*********

*/
#include<iostream>
using namespace std;

int main(){
    int i,j,s,n,m;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(s=1;s<=2*i-1;s++){
            cout<<"*";
        }
        cout<<endl;
    }
}
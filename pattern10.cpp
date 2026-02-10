/*

*
**
***
****
*****
******
*****
****
***
**
*

*/
#include<iostream>
using namespace std;

int main(){
    int i,j,s,k,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(s=n-1;s>=1;s--){
        for(k=1;k<=s;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
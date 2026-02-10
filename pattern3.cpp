/*
Input:- 5
Output:-

11111
22222
33333
44444
55555

*/
#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<i;
        }
        cout<<endl;
    }

}
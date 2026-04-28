#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    //First pyramid
    for(int i=1;  i<=n; i++) {
        //Spaces
        for(int j=1; j<=n-i; j++) {
            cout<<" " ;
        }
        //Stars
        for(int j=1; j<=2*i-1; j++) {
            cout<< "*";
        }
        cout<<endl;
    }
    //Second pyramid
    for(int i=n-1; i>=1; i--) {
        //spaces
        for(int j=1;j<=n-i; j++) {
            cout<<" ";
        }
        //Stars
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<< endl;

    }
    return 0;
}
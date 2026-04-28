#include<bits/stdc++.h>
using namespace std;

void binTodec(int binNum){
    int n = binNum;
    int DecNum = 0;
    int pow = 1;

    while(n > 0){
       int LastDig = n % 10;
       DecNum += LastDig * pow;
       pow = pow * 2;
       n = n/10;

    }
    cout<<DecNum<<endl;
}

void decTobin(int DecNum){
    int n = DecNum;
    int binNum = 0;
    int pow = 1;

    while(n > 0){
        int LastDig = n % 2;
        binNum += LastDig * pow;
        pow = pow * 10;
        n = n/2;
    }
    cout<<binNum<<endl;
}

int main(){
    binTodec(101);
    decTobin(20);
    return 0;
}
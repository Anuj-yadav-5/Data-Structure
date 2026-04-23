#include <bits/stdc++.h>
using namespace std;

int PrintSubarrays(int *arr,int n){
    for(int start = 0; start < n; start++){
        for(int end =start; end <n;end++ ){
           // cout << "(" <<start <<"," << end <<") ";
           for(int i= start; i<=end; i++){
            cout << arr[i];
           }
           cout <<",";
        }
        cout << endl;
    }
}

int main(){
    int arr[5] ={1,2,3,4,5};
    int n =sizeof(arr) / sizeof(int);
    PrintSubarrays(arr,5);
    
    return 0;
}
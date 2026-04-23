#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE METHOD
void MaxSubarraySum1(int *arr,int n){
    int maxSum = INT_MIN;
    for(int  start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int CurrSum = 0; 
            for(int i =start; i<=end; i++){
                CurrSum += arr[i];
            }
            cout << CurrSum << ",";
            maxSum = max(maxSum,CurrSum);
        }
        cout<<endl;
    }
    cout <<"maximum subarray sum = " << maxSum <<endl;

}
//OPTIMESED METHOD
void MaxSubarraySum2(int *arr,int n){
    int maxSum = INT_MIN  ;
    for(int start=0; start<n; start++){
         int CurrSum = 0;
        for(int end=start; end<n; end++){
            CurrSum += arr[end];
            maxSum = max(maxSum,CurrSum);
        }
    }
    cout <<"maximum subarray sum = " << maxSum <<endl;

}
//KADAN'S METHOD
void MaxSubarraySum3(int *arr,int n){
    int maxSum = INT_MIN  ;
    int CurrSum = 0;

    for(int i=0; i<n; i++){
        CurrSum += arr[i];
        maxSum = max(CurrSum, maxSum);
        if(CurrSum<0){
            CurrSum = 0;
        }
    }
     cout <<"maximum subarray sum = " << maxSum <<endl;
}

int main(){
    int arr[6] = {2,-3 ,6,-5,4,2};
    int n =sizeof(arr)/sizeof(int);

    MaxSubarraySum1(arr ,6);
    return 0 ;

    }

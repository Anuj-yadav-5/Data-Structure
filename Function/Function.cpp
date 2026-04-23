#include<bits/stdc++.h>
using namespace std;

//product of two numbers

int product(int a, int b=1 ){
   int product = a*b;
   return product;
}


//even-->true; odd-->false

bool isEven(int n) {
    if(n%2==0){
        return true;
    }else{
        return false;
    }
}

//Factorial of any number

int factorial(int n){
    int fact =1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    cout<<"factorial ("<<n<<") = " <<fact << endl;
    return fact;
}

//Number is prime or not

bool isPrime(int n){
    if(n==1) {
        return false;
    }
    for(int i=2; i<n-1; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
} 

// finding value of ncr 
int binCoeff(int n, int r){
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n-r);

    int result = val1/(val2*val3);

    return result;
}
int main(){
  cout<<binCoeff(3, 2)<<endl;
  
    return 0;
}
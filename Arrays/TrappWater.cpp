#include <iostream>
using namespace std;

void trappWater(int *height , int n){
     int leftMax[20000];
     leftMax[0] = INT16_MIN;
     for(int i=1; i<n; i++){
        leftMax[i] = max(leftMax[i-1], height[i-1]);
        cout << leftMax[i] << ",";
     }
     int rightMax[20000];
     rightMax[n-1] = INT16_MIN;

     for(int i=1; i<99; i++){
        
     }


}

int main(){
    int height[7] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(int);
    trappWater(height, n );
    
    return 0;
}
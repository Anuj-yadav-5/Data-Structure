#include <bits/stdc++.h>
using namespace std;


class Car {
    string name;
    string color;
    int price;  

public: 
 // Constructor without parameter 
Car(){
    cout << "Constructor witout parameter" <<endl;
}
 // Constructor
// Car( string nameValue ,  string colorValue){
//     cout << "Constructor is called, Object being Created" <<endl; 
//     name =nameValue;
//     color = colorValue;
// }

// constructor with parameter
//  this->  this->prop
Car( string name,  string color){
    cout << "constructor with parameter" <<endl; 
   this-> name =name;
    this->color = color;
}

void start (){
  cout << "Car has Started...";
}

void stop(){
    cout << "car has stopped...";
}

//getter
string getName(){
    return name;
}
string getColor(){
    return color;
}

};

int main(){
    Car c0;
    Car c1("Maruti 800" , "White");
    Car c3("fortuner", "black");

    cout << "Car Name : " << c1.getName() << endl;
    cout << "Color : " << c1.getColor() << endl;

    return 0;
}